#include "DiscountBase.h"
#include <iostream>

using namespace std;

void DiscountBase::SetCategory(CategoryType categoty)
{
	_category = categoty;
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	double allPrice = 0;
	for (int i = 0; i < productsCount; i++)
	{
		allPrice = allPrice + products[i].GetPrice();
	}

	for (int i = 0; i < productsCount; i++)
	{
		cout << "������ ���� ������ " << products[i].GetName() << ": " << products[i].GetPrice() << endl;
		products[i].SetPrice(discount->Calculate(&products[i]));
		cout << "���� ��� ���������� ������: " << products[i].GetPrice() << endl;
	}

	double allPriceWithDiscount = 0;
	for (int i = 0; i < productsCount; i++)
	{
		allPriceWithDiscount = allPriceWithDiscount + products[i].GetPrice();
	}
	cout << "���� ����� ������ ������� ��� ����� ������: " << allPrice << endl;
	cout << "���� ����� ������ ������� � ������ ������: " << allPriceWithDiscount << endl;
	cout << "������ ���������: " << allPrice - allPriceWithDiscount << endl;
}