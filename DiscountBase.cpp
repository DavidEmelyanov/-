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
		cout << "Старая цена товара " << products[i].GetName() << ": " << products[i].GetPrice() << endl;
		products[i].SetPrice(discount->Calculate(&products[i]));
		cout << "Цена при применении скидки: " << products[i].GetPrice() << endl;
	}

	double allPriceWithDiscount = 0;
	for (int i = 0; i < productsCount; i++)
	{
		allPriceWithDiscount = allPriceWithDiscount + products[i].GetPrice();
	}
	cout << "Цена всего списка товаров без учета скидки: " << allPrice << endl;
	cout << "Цена всего списка товаров с учетом скидки: " << allPriceWithDiscount << endl;
	cout << "Скидка составила: " << allPrice - allPriceWithDiscount << endl;
}