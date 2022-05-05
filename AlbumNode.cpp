#pragma warning(disable:4996)
#include "AlbumNode.h"
#include "SongGenre.h"
#include "CheckInt.h"
#include <ctime>

void AlbumNode::setName() 
{
	cout << "\n������� �������� �������: ";
	this->name = setString();
	cout << endl;
};

void AlbumNode::setYear()
{
	cout << "\n������� ��� ������� �������: ";
	time_t t;
	time(&t);
	int localYear = 1900 + localtime(&t)->tm_year;
	cout << "\n�������� �������� �� 0 �� �������� ����\n";
	do
	{
		cout << "������� ���: ";
		this->year = CheckInt();
	} while (this->year<0 || this->year>localYear);
	cout << endl;
};

string AlbumNode::getName()
{
	return this->name;
};

int AlbumNode::getCountSongs()
{
	return this->countSongs;
};

int AlbumNode::getYear()
{
	return this->year;
};

SongNode3* AlbumNode::getSongByID(int id)
{
	return this->Song[id];
};

void AlbumNode::setSongByID(SongNode3* Song, int id)
{
	this->Song[id] = Song;
};

AlbumNode::AlbumNode(int countSongs)
{
	this->year = 0;
	this->name = "NaN";
	this->countSongs = 0;
	this->Song = new SongNode3 * [countSongs];
};

AlbumNode::AlbumNode()
{
	this->setName();
	this->getYear();
	cout << "\n������� ���������� ������ � �������: ";
	this->countSongs = CheckInt();
	cout << endl;
	this->Song = new SongNode3 * [this->countSongs];
	for (int i = 0; i < this->countSongs; i++)
	{
		this->Song[i] = new SongNode3;
	}
};

void AlbumNode::showNode()
{
	cout << "�������� �������: " << this->name << endl;
	cout << "��� �������: " << this->year << endl;
	cout << "\n ������ ������ �������:\n";
	for (int i = 0; i < this->countSongs; i++)
	{
		this->Song[i]->showNode();
	}
};

SongNode3* FindSong(AlbumNode* album, string songTitle)
{
	for (int i = 0; i < album->countSongs; i++)
	{
		if (album->Song[i]->getName() == songTitle)
		{
			return album->Song[i];
		}
	}
	return nullptr;
};

AlbumNode* FindAlbum(AlbumNode* album, SongNode3* song)
{
	for (int i = 0; i < album->countSongs; i++)
	{

		if (isRightSong(album->Song[i], song))
		{
			return album;
		}
	}
	return nullptr;
};

bool isRightSong(SongNode3* song1, SongNode3* song2)
{
	if ((song1->getDuration() == song2->getDuration()) && (song1->getGenre() == song2->getGenre()) && (song1->getName() == song2->getName()) && (song1->getYear() == song2->getYear()))
	{
		return true;
	}
	return false;
};