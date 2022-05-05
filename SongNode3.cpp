#pragma warning(disable:4996)
#include <ctime>
#include "SongNode3.h"
#include "CheckInt.h"
#include "SongGenre.h"
#include "AlbumNode.h"

using namespace std;

void SongNode3::setGenre()
{
	int temp;
	while (true)
	{
		cout << "�������� ����:\n 0 - Rap, 1 - Hip Hop, 2 - Rock, 3 - EDM, 4 - Funk, 5 - Jazz\n";
		temp = CheckInt();
		switch (temp)
		{
			case 0:
			{
				this->genre = Rap;
				return;
			}
			case 1:
			{
				this->genre = Hip_Hop;
				return;
			}
			case 2:
			{
				this->genre = Rock;
				return;
			}
			case 3:
			{
				this->genre = EDM;
				return;
			}
			case 4:
			{
				this->genre = Funk;
				return;
			}
			case 5:
			{
				this->genre = Jazz;
				return;
			}
			default:
			{
				break;
			}
			
		}
	}
};

void SongNode3::setDuration()
{
	cout << "������� ����� � ��������: ";
	do
	{
		this->duration = CheckInt();
		cout << endl;
	} while (this->duration < 1);
};

void SongNode3::setName()
{
	cout << "������� �������� �����: ";
	this->name = setString();
	cout << endl;
};

string SongNode3::getName()
{
	return this->name;
};

int SongNode3::getDuration()
{
	return this->duration;
};

SongGenre SongNode3::getGenre()
{
	return this->genre;
};

void SongNode3::setYear()
{
	cout << "\n���������� ��� ������� �����: "; 
	time_t t;
	time(&t);
	int localYear = 1900 + localtime(&t)->tm_year;
	cout << "\n�������� �������� �� 0 �� �������� ����\n";
	do
	{
		this->year = CheckInt();
		cout << endl;
	} while (this->year<0 || this->year>localYear);
};

int SongNode3::getYear()
{
	return this->year;
}

SongNode3::SongNode3()
{
	this->setName();
	this->setGenre();
	this->setDuration();
	this->setYear();
};

void SongNode3::showNode()
{
	cout << "�������� �����: " << this->getName() << endl;
	cout << "����: ";
	switch (this->genre)
	{
	case Rap:
	{
		cout << "Rap\n";
		break;
	}
	case Hip_Hop:
	{
		cout << "Hip_Hop\n";
		break;
	}
	case Rock:
	{
		cout << "Rock\n";
		break;
	}
	case EDM:
	{
		cout << "EDM\n";
		break;
	}
	case Funk:
	{
		cout << "Funk\n";
		break;
	}
	case Jazz:
	{
		cout << "Jazz\n";
		break;
	}
	}
	cout << "��� �������: " << this->year;
	cout << "\n����������������� �����: " << this->duration / 60 << ":" << this->duration % 60;
	cout << "\n";
};

void SongNode3::CopyNode(SongNode3* Node)
{
	this->genre = Node->getGenre();
	this->name = Node->getName();
	this->duration = Node->getDuration();
	this->year = Node->getYear();
};