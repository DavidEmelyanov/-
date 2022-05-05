#pragma once
#include <string>

using namespace std;

struct ContactNode
{
	string name;//Ќазвание контакта
	string number;//string потому, что номера бывают разной длины.
	string description;//ќписание контакта
	bool isInBlackist;
};