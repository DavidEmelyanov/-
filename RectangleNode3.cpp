#include "RectangleNode3.h";
#include <iostream>
#include "CheckInt.h"

using namespace std;

double RectangleNode3::getLength()
{
	return this->length;
};

double RectangleNode3::getWidth()
{
	return this->width;
};

RectangleNode3::RectangleNode3()
{
	int choice;
	do
	{
		cout << "Для автоматического заполнения введите 1.\n";
		cout << "Для заполнения вручную введите 2.\n";
		choice = CheckInt();
	} while (choice < 1 || choice>2);
	if (choice == 2)
	{
		this->Point = new PointNode();
		cout << "Введите длину прямоугольника: ";
		this->length = CheckDouble();
		cout << endl;
		cout << "Введите длину прямоугольника: ";
		this->width = CheckDouble();
		cout << endl;
	}
	else//Иначе будет только 1
	{
		this->length = RandDouble();
		this->width = RandDouble();
		this->Point = new PointNode(this->length, this->width);
		this->length = RandDouble();
		this->width = RandDouble();
	}
};

RectangleNode3::RectangleNode3(PointNode p, double length, double width)
{
	this->Point = &p;
	this->length = length;
	this->width = width;
};

void RectangleNode3::ShowNode()
{
	cout << "X: " << this->Point->GetX();
	cout << " Y: " << this->Point->GetY();
	cout << " length: " << this->getLength();
	cout << " width: " << this->getWidth() << endl;
};

void DemoRectangleNode3WithPoints()
{
	const int count = 5;
	RectangleNode3** Rectangle = new RectangleNode3*[count];
	for (int i = 0; i < count; i++)
	{
		cout << endl;
		cout << "Введите данные для прямоугольника 1\n";
		Rectangle[i] = new RectangleNode3;
	}
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		Rectangle[i]->ShowNode();
		cout << endl;
		cout << "Xcenter = " << Rectangle[i]->getCenterX();
		cout << endl;
		cout << "Ycenter = " << Rectangle[i]->getCenterY();
		cout << endl;
	}
};

double RectangleNode3::getCenterX()
{
	double temp = this->Point->GetX();
	temp += this->getLength() / 2;
	return temp;
};

double RectangleNode3::getCenterY()
{
	double temp = this->Point->GetY();
	temp += this->getWidth() / 2;
	return temp;
};