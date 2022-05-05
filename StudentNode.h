#pragma once
#include "PersonNode.h"
#include <string>

using namespace std;

class StudentNode :	public PersonNode
{
private:
	string number;
	int year;
public:	
	string getNumber();
	int getYear();
	void setYear();
	void setNumber();
	void setYear(int i);
	void setNumber(string s);
	StudentNode();
	bool checkYear();
	StudentNode(string name, string surename, string patronymic, string number, int year);
};

