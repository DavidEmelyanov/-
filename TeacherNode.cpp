#include "TeacherNode.h"
#include "CheckInt.h"
#include <iostream>

using namespace std;

string TeacherNode::getPosition()
{
	return this->position;
};

void TeacherNode::setPosition()
{
	cout << "Введите название должности: ";
	this->position = setString();
};

TeacherNode::TeacherNode() :PersonNode()
{
	this->setPosition();
};

TeacherNode::TeacherNode(string name, string surename, string patronymic, string position) :PersonNode(name, surename, patronymic)
{
	this->position = position;
};