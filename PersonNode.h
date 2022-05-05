#pragma once
#include <string>

using namespace std;

class PersonNode
{
private:
	string name;
	string surename;
	string patronymic;
public:
	string  getName();
	string  getSurename();
	string  getPatronymic();
	void  setName();
	void  setSurename();
	void  setPatronymic();
	PersonNode();
	PersonNode(string name, string surename, string patronymic);
};

void ShowName(PersonNode* person);