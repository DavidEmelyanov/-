#include "ProductNode5.h"
#include <iostream>

string ProductNode5::getName()
{
	return this->_name;
};

void ProductNode5::setName()
{
	cout << "Ââåäèòå íàçâàíèå ïðîäóêòà: ";
	this->_name = setString();
};

CategoryType ProductNode5::getCategory()
{
	return this->_category;
};

void ProductNode5::setCategory()
{
	cout << "Âûáåðèòå êàòåãîðèþ èç ïðåäëîæåííûõ:\n";
	cout << "0 - householdÑhemicals;";
	cout << "1 - milkÇroducts;";
	cout << "2 - confectionery;";
	cout << "3 - meat;";
	cout << "4 - drinks;";
	switch (CheckInt())
	{
		case 0:
		{
			this->_category = householdÑhemicals;
			break;
		}
		case 1:
		{
			this->_category = milkÇroducts;
			break;
		}
		case 2:
		{
			this->_category = confectionery;
			break;
		}
		case 3:
		{
			this->_category = meat;
			break;
		}
		case 4:
		{
			this->_category = drinks;
			break;
		}
		default:
		{
			throw exception("Âûáðàííàÿ êàòåãîðèÿ îòñóòñòâóåò â ñïèñêå.");
			system("pause");
			break;
		}
	}
};

int ProductNode5::getCount()
{
	return this->_count;
};

void ProductNode5::setCount()
{
	cout << "Ââåäèòå êîëè÷åñòâî:";
	this->_count = CheckInt();
	if (0 > this->_count > 100000)
	{
		throw exception("Íå ïðèíàäëåæèò äèàïàçîíó");//Out of range
	}
};

ProductNode5::ProductNode5::ProductNode5()
{
	this->setName();
	this->setCategory();
	this->setCount();
};

ProductNode5::ProductNode5(string name, CategoryType category, double count)
{
	this->_name = name;
	this->_category = category;
	this->_count = count;
};