#pragma once
#include "DiscountBase.h"

class PercentDiscount : virtual public DiscountBase
{
	int _percent;
public: 
	void SetPercent(int percent);
	int GetPercent();

	PercentDiscount(int percent, CategoryType category);

	double Calculate(Product* product) override;
};