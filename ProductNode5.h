#pragma once
#include <iostream>
#include <string>
#include "CheckInt.h"
#include "CategoryType.h"

using namespace std;

class ProductNode5
{
private:
	string _name;
	CategoryType _category;
	int _count;
public:
	string getName();
	void setName();
	CategoryType getCategory();
	void setCategory();
	int getCount();
	void setCount();
	ProductNode5();
	ProductNode5(string name, CategoryType category, double count);
};