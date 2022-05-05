#pragma once
#include "PersonNode.h"
class TeacherNode :	public PersonNode
{
private:
	string position;
public:
	string getPosition();
	void setPosition();
	void setPosition(string s);
	TeacherNode();
	TeacherNode(string name, string surename, string patronymic, string position);
};

