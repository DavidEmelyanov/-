#include "PersonNode.h"
#include <iostream>
#include "CheckInt.h"

string PersonNode::getName()//�� 5.1.4. ���������, �� �� ���������� ������ � ������ ����������� �����������.
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
	cout << "������� ���: ";
	this->name = setString();
};

void PersonNode::setSurename()
{
	cout << "������� �������: ";
	this->name = setString();
};

void PersonNode::setPatronymic()
{
	cout << "������� ��������: ";
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