#include <iostream>
#include "PercentDiscount.h"

void PercentDiscount::SetPercent(int percent)
{
	if (0 > percent > 100)
	{
		throw exception("Размер скидки должен быть от 0 до 100!");
	}
	this->_percent = percent;
}

int PercentDiscount::GetPercent()
{
	return this->_percent;
}

PercentDiscount::PercentDiscount(int percent, CategoryType category) : DiscountBase(category)
{
	SetPercent(percent);
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		double newPrice = product->GetPrice() - product->GetPrice() / 100 * this->GetPercent();
		return newPrice;
	}
	else if (product->GetCategory() != this->GetCategory())
	{
		return product->GetPrice();
	}	
	return product->GetPrice();
}
