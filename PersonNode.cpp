#include "PersonNode.h"
#include <iostream>
#include "CheckInt.h"

string PersonNode::getName()//На 5.1.4. Создается, но не передаются данные и берётся стандартный конструктор.
{
	return this->name;
};

string PersonNode::getSurename()
{
	return this->surename;
};

string PersonNode::getPatronymic()
{
	return this->patronymic;
};

void PersonNode::setName()
{
	cout << "Введите имя: ";
	this->name = setString();
};

void PersonNode::setSurename()
{
	cout << "Введите фамилию: ";
	this->name = setString();
};

void PersonNode::setPatronymic()
{
	cout << "Введите отчество: ";
	this->name = setString();
};

PersonNode::PersonNode()
{
	this->setName();
	this->setSurename();
	this->setPatronymic();
};

PersonNode::PersonNode(string name, string surename, string patronymic)
{
	this->name= name;
	this->surename = surename;
	this->patronymic = patronymic;
};

void ShowName(PersonNode* person)
{
	cout << endl << person->getSurename() << " " << person->getName() << " " << person->getPatronymic() << endl;
};