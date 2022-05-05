#include "PointNode.h"
#include <iostream>
#include "CheckInt.h"

using namespace std;

PointNode::PointNode(double X, double Y)
{
	this->X = X;
	this->Y = Y;
};

PointNode::PointNode()
{
	cout << "¬ведите значение X: ";
	this->X = CheckDouble();
	cout << endl;
	cout << "¬ведите значение Y: ";
	this->Y = CheckDouble();
	cout << endl;
};

double PointNode::GetX()
{
	return X;
};

double PointNode::GetY()
{
	return Y;
};