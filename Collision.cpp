#include "Collision.h"
#include <iostream>
#include <math.h>
#include "RectangleNode3.h"

using namespace std;

bool CollisionManager::IsCollision(RectangleNode3 Rectangle1, RectangleNode3 Rectangle2)
{
	double deltaX = abs(Rectangle1.getCenterX() - Rectangle2.getCenterX());
	double deltaY = abs(Rectangle1.getCenterY() - Rectangle2.getCenterY());
	double deltaWidth = abs(Rectangle1.getWidth() - Rectangle2.getWidth()) / 2;
	double deltaLenght = abs(Rectangle1.getLength() - Rectangle2.getLength()) / 2;

	if (deltaX < deltaWidth || deltaY < deltaLenght)
	{
		return true;
	}
	return false;
};

bool CollisionManager::IsCollision(RingNode Ring1, RingNode Ring2)
{
	double deltaX = abs(Ring1.getX() - Ring2.getX());
	double deltaY = abs(Ring1.getY() - Ring2.getY());
	double length = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
	if (length < (Ring1.getR() + Ring2.getR()))
	{
		return true;
	}
	return false;
};

bool CollisionManager::IsCollision(RingNode* Ring1, RingNode* Ring2)
{
	double deltaX = abs(Ring1->getX() - Ring2->getX());
	double deltaY = abs(Ring1->getY() - Ring2->getY());
	double length = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
	if (length < (Ring1->getR() + Ring2->getR()))
	{
		return true;
	}
	return false;
};