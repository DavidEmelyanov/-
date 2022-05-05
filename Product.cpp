#include <iostream>
#include "Product.h"

void Product::SetProduct(string name, double price, CategoryType category)
{
	if (100000 < price < 0)
	{
		throw exception("Цена должна быть в диапазоне от 0 до 100 000!");
	}

	this->_name = name;
	this->_price = price;
	this->_category = category;
}

void Product::GetProduct()
{
	cout << "Продукт: " << this->_name << endl;
	cout << "Цена: " << this->_price << endl;
	cout << "Категория товара: ";
	switch (this->_category)
	{
	case 1: { cout << "Домашняя химия" << endl; }; break;
	case 2: { cout << "Молочная продукция" << endl; }; break;
	case 3: { cout << "Кондитерская продукция" << endl; }; break;
	case 4: { cout << "Мясная продукция" << endl; }; break;
	case 5: { cout << "Напитки" << endl; }; break;
	}
}

void Product::SetPrice(double price)
{
	if (100000 < price < 0)
	{
		throw exception("Цена должна быть в диапазоне от 0 до 100 000!");
	}
	this->_price = price;
}

string Product::GetName()
{
	return this->_name;
}

double Product::GetPrice()
{
	return this->_price;
}

double Product::GetCategory()
{
	return this->_category;
}

Product::Product()
{
}

Product::Product(string name, double price, CategoryType category)
{
	SetProduct(name, price, category);
}
