#pragma once
#include <iostream>
#include <string>
#include "CheckInt.h"

using namespace std;

class BookNode
{
private:
	string Name;
	int year;
	int pageCount;
	int authorCount;
	string* author;
public:
	BookNode();
	BookNode(string Name, int year, int pageCount, int authorCount, string* author);
	void ShowNode();
	void WriteBookToConsole();
	friend int* FindBookByAuthor(BookNode** Book, int booksCount, string author);
};

void DemoBook();
void ReadBookFromConsole();
BookNode** CreateBookNodeList(int count);
int* FindBookByAuthor(BookNode** Book, int booksCount, string author);