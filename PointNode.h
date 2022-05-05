#pragma once
class PointNode
{
public:
	PointNode();
	PointNode(double X, double Y);
	double GetX();
	double GetY();
private:
	double X;
	double Y;
};