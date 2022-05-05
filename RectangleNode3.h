#pragma once
#include "PointNode.h"

class RectangleNode3
{
public:
	RectangleNode3();
	RectangleNode3(PointNode p, double length, double width);
	double getLength();
	double getWidth();
	void ShowNode();
	double getCenterX();
	double getCenterY();
private:
	PointNode* Point;
	double length;
	double width;
};

void DemoRectangleNode3WithPoints();