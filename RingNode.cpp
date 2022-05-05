#include "RingNode.h"
#include <iostream>
#include "CheckInt.h"
#include "DoubleValidator.h"
#include "Collision.h"

using namespace std;

int RingNode::GetAllRingsCount()
{
	return RingNode::ringsCount;
};

void RingNode::setR()
{
	do 
	{
		cout << "¬ведите диаметр внешнего кольца: ";
		this->R = CheckDouble();
		cout << endl;
	} while (!DoubleValidator::IsPositive(this->R));
};

void RingNode::setr()
{
	do
	{
		cout << "¬ведите диаметр внутреннего кольца: ";
		this->r = CheckDouble();
		cout << endl;
	} while (!DoubleValidator::IsPositive(this->R));
};

void RingNode::calculateArea()
{
	this->S = 3.14 * sqrt(this->getR() *this->getR() - this->getr() *this->getr());
};

double RingNode::getR() 
{
	return this->R;
};
double RingNode::getr()
{
	return this->r;
};

double RingNode::getArea()
{
	return this->S;
};

double RingNode::getX()
{
	return this->center->GetX();
};

double RingNode::getY()
{
	return this->center->GetY();
};

RingNode::RingNode()
{
	cout << "¬ведите координату X дл€ центра: ";
	double X = CheckDouble();
	cout << endl;
	cout << "¬ведите координату Y дл€ центра: ";
	double Y = CheckDouble();
	cout << endl;
	this->center = new PointNode(X,Y);
	RingNode::ringsCount++;
	do
	{
		this->setR();
		this->setr();
	} while (this->getR() <= this->getr());
	this->calculateArea();
};

RingNode::~RingNode()
{
	RingNode::ringsCount--;
};

RingNode::RingNode(double R, double r, double x, double y)
{
	this->R = R;
	this->r = r;
	this->center = new PointNode(x,y);
	this->calculateArea();
	RingNode::ringsCount++;
};

int RingNode::ringsCount = 0;