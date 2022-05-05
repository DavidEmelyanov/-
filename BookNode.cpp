#pragma once
#pragma warning(disable:4996)
#include <Windows.h>
#include "BookNode.h"
#include <ctime>

using namespace std;

BookNode::BookNode()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	time_t t;
	time(&t);
	int localYear = 1900 + localtime(&t)->tm_year;
	cout << "������� �������� �����: ";
	cin >> s;
	this->Name += s;
	getline(cin, s);
	this->Name += s;
	cout << endl;
	do
	{
		cout << "������� ��� �������: ";
		this->year = CheckInt();
		if (this->year < 0 || this->year > localYear)
		{
			cout << "��� �� ����� ������� ������������� �������� ��� ��������� �������\n";
		}
	} while (this->year < 0 || this->year > localYear);
	cout << endl;
	do
	{
		cout << "������� ���������� �������: ";
		cin >> this->pageCount;
		if (this->pageCount < 1)
		{
			cout << "���������� ������� �� ����� ���� ������ 1. ��������� ����.\n";
		}
	} while (this->pageCount < 1);
	cout << endl;
	do 
	{
		cout << "������� ���������� �������: ";
		this->authorCount = CheckInt();
		cout << endl;
		if (this->authorCount < 1 || this->authorCount>10)
		{
			cout << "���������� ������� ������ ���� � ��������� 1-10. ��������� ����\n";
		}
	} while ((this->authorCount>10) || (this->authorCount<1));
	author = new string[authorCount];
	for (int i = 0; i < authorCount; i++)
	{
		cout << "������� �����a �" << i + 1 << ": ";
		cin >> s;
		this->author[i] += s;
		getline(cin, s);
		this->author[i] += s;
		cout << endl;
	}
};

BookNode::BookNode(string Name, int year, int pageCount, int authorCount, string* author)
{
	this->Name = Name;
	this->year = year;
	this->pageCount = pageCount;
	this->authorCount = authorCount;
	this->author = author;
}

void BookNode::ShowNode()
{
	cout << "�������� �����: ";
	cout << this->Name;
	cout << endl;
	cout << "��� �������: ";
	cout << this->year;
	cout << endl;
	cout << "���������� �������: ";
	cout << this->pageCount;
	cout << endl;
	cout << "���������� �������: ";
	cout << this->authorCount;
	cout << endl;
	for (int i = 0; i < this->authorCount; i++)
	{
		cout << "����� �" << i+1 <<": ";
		cout << this->author[i];
		cout << endl;
	}
};

void DemoBook()
{
	int authorCount = 2;
	string* s = new string[authorCount];
	s[0] = "���������� �.";
	s[1] = "���������� �.";
	BookNode Book("������� ������", 1963, 224, authorCount, s);
	Book.ShowNode();
	system("pause");
	return;
};

void ReadBookFromConsole()
{
	BookNode* Book = nullptr;
	Book = new BookNode;
	Book->ShowNode();
	system("pause");
	return;
};

BookNode** CreateBookNodeList(int count)//��� �������� ������ �����
{
	BookNode** Book = new BookNode * [count];
	for (int i = 0; i < count; i++)
	{
		Book[i] = new BookNode;
	}
	return Book;
}

void BookNode::WriteBookToConsole()
{
	for (int i = 0; i < this->authorCount; i++)
	{
		cout << this->author[i];
		if(i<this->authorCount-1)
		{
			cout << ", ";
		}
	}
	cout << " " << this->Name << ". " << this->year << ". - " << this->pageCount << " �.";
	cout << endl;
	return;
};

int* FindBookByAuthor(BookNode** Book, int booksCount, string author)
{
	int* arr = new int[booksCount];
	int index = 0;
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < Book[i]->authorCount; j++)
		{
			if (Book[i]->author[j] == author)
			{
				arr[index]=i;
				index++;
				break;
			}
		}
	}
	if (index < booksCount)
	{
		arr[index] = -1;
	}
	if (index == 0)
	{
		arr[0] = -1;
	}
	return arr;//���������� ������� ����.
};