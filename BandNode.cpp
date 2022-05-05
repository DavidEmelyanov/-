#include "BandNode.h"
#include "SongGenre.h"

void BandNode::setDescription()
{
	string tmp;
	cout << "\nВведите описание: ";
	this->description = setString();
	cout << endl;
};

string BandNode::getDescription()
{
	return this->description;
};

string BandNode::getName()
{
	return this->name;
};

void BandNode::setName()
{
	cout << "\n Введите название группы: ";
	this->name = setString();
	cout << endl;
};

BandNode::BandNode()
{
	this->setName();
	this->setDescription();
	do
	{
		cout << "\nВведите количество альбомов: ";
		this->countAlbum = CheckInt();
		cout << endl;
	} while (this->countAlbum < 1);
	this->album = new AlbumNode * [this->countAlbum];
	for (int i = 0; i < this->countAlbum; i++)
	{
		this->album[i] = new AlbumNode;
	}
};

int BandNode::getCountAlbum()
{
	return this->countAlbum;
};

void DemoBand()
{
	BandNode* band = new BandNode;
	cout << "\n\nДемонстрация поиска песни.\n";
	cout << "Введите название искомого трека: ";
	string name = setString();
	cout << endl;
	SongNode3* song = nullptr;
	for (int i = 0; i < band->getCountAlbum(); i++)
	{
		song = FindSong(band->album[i], name);
		if (song != nullptr)
		{
			break;
		}
	}
	cout << "\n____________\n Найденный трек: ";
	song->showNode();
	AlbumNode* alb = nullptr;
	cout << "\n\n_______________\nДемонстрация поиска альбома.\nВведите название трека: ";
	name = setString();
	cout << endl;
	for (int i = 0; i < band->getCountAlbum(); i++)
	{
		song = FindSong(band->album[i], name);
		if (song != nullptr)
		{
			break;
		}
	}
	for (int i = 0; i < band->getCountAlbum(); i++)
	{
		alb = FindAlbum(band->album[i], song);// Ошибка во время поиска альбома.
		if (alb != nullptr)
		{
			break;
		}
	}
	cout << "\n\n Найденный альбом:\n";
	alb->showNode();
	int count = 0;
	cout << "\n\n________\nДемонстрация GetAllSongs()\n";
	SongNode3** node = band->GetAllSongs(count);
	cout << "\n\n____________\n";
	for (int i = 0; i < count; i++)
	{
		node[i]->showNode();
	}
};

AlbumNode** BandNode::getAlbums()
{
	return this->album;
};

SongNode3** BandNode::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	int k = 0;
	for (int i = 0; i < this->countAlbum; i++)
	{
		k += this->album[i]->getCountSongs();
	}
	SongNode3** Songs = new SongNode3*[k];
	for (int i = 0; i < this->countAlbum; i++)
	{
		for (int j = 0; j < this->album[i]->getCountSongs(); j++)
		{
			Songs[allSongsCount] = this->album[i]->getSongByID(j);
			allSongsCount++;
		}
	}
	return Songs;
};

SongNode3** BandNode::GetSongsByGenre(SongGenre findingGenre, int& allSongsCount)
{
	AlbumNode** tmp = this->getAlbums();
	allSongsCount = 0;
	SongNode3** Songs = GetAllSongs(allSongsCount);
	SongNode3* temp;
	int count = 0;
	for (int i = 0; i <	allSongsCount; i++)
	{
		if (Songs[i]->getGenre() == findingGenre)
		{
			temp = Songs[count];
			Songs[count] = Songs[i];
			Songs[i] = temp;
			count++;
		}
	}
	allSongsCount = count;
	if (count == 0)
	{
		return nullptr;
	}
	SongNode3** temp1;
	temp1 = new SongNode3*[allSongsCount];
	for (int i = 0; i < allSongsCount; i++)
	{
		temp1[i] = Songs[i];
	}
	return temp1;
};