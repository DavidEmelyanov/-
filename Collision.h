#pragma once
#include "RectangleNode3.h"
#include "RingNode.h"

static class CollisionManager
{
public:
	static bool IsCollision(RectangleNode3 Rectangle1, RectangleNode3 Rectangle2);
	static bool IsCollision(RingNode Ring1, RingNode Ring2);
	static bool IsCollision(RingNode* Ring1, RingNode* Ring2);
};