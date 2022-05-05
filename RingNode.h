#pragma once
#include "PointNode.h"

class RingNode
{
private:
	static int ringsCount;
	double R;
	double r;
	double S;
	PointNode* center = nullptr;
public:
	void setR();
	void setr();
	void calculateArea();
	double getR();
	double getr();
	double getArea();
	double getX();
	double getY();
	static int GetAllRingsCount();
	RingNode();
	RingNode(double R, double r, double x, double y);
	~RingNode();
};
