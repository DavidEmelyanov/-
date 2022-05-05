#include "StudentNode.h"
#include <iostream>
#include "CheckInt.h"

string StudentNode::getNumber()
{
	return this->number;
};

int StudentNode::getYear()
{
	return this->year;
};

void StudentNode::setYear()
{
	cout << "Введите год поступления: ";
	this->year = CheckInt();
	cout << endl;
	this->checkYear();
};

bool StudentNode::checkYear()
{
	try
	{
		if (0<this->year>2020)	
		{
			throw(exception("Год должен соответствовать диапазону [0;2020].\n"));
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	return true;
};

void StudentNode::setNumber()
{
	cout << "Введите номер зачётной книжки: ";
	this->number = setString();
};

StudentNode::StudentNode(string name, string surename, string patronymic, string number, int year): PersonNode(name, surename, patronymic)
{
	this->number = number;
	this->year = year;
};

StudentNode::StudentNode():PersonNode()
{
	this->setNumber();
	this->setYear();
};