#pragma once
#include <string>
#include "CategoryType.h"

using namespace std;

class Product
{
	string _name;
	double _price;
	CategoryType _category;
public:
	void SetProduct(string name, double price, CategoryType category);
	void GetProduct();
	void SetPrice(double price);
	string GetName();
	double GetPrice();
	double GetCategory();

	Product();
	Product(string name, double price, CategoryType category);
};

