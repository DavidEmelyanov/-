#include "GeometricProgram.h"

void GeometricProgram::DemoRing()
{
	bool isCollision = false;
	RingNode** Rings = nullptr;
	int count = 3;
	do
	{
		Rings = new RingNode*[count];
		for (int i = 0; i < count; i++)
		{
			Rings[i] = new RingNode;
		}
		cout << "Колец создано: " << RingNode::GetAllRingsCount() << ".\n";
		count = RingNode::GetAllRingsCount();
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = i + 1; j < count; j++)
			{
				isCollision = CollisionManager::IsCollision(Rings[i], Rings[j]);
				if (isCollision)
				{
					break;
				}
			}
			if (isCollision)
			{
				break;
			}
		}
		if (isCollision)
		{
			cout << "Некоторые кольца пересекаются!\nВведите данные заново!\n";
			delete[] Rings;
		}
	} while (isCollision);
	cout << "Количество колец до вызова конструктора: " << RingNode::GetAllRingsCount() << endl;
	system("pause");
	RingNode* Ring = new RingNode(10.0, 5.0, 25.0, 25.0);
	cout << "Количество колец после вызова конструктора: " << RingNode::GetAllRingsCount() << endl;
	system("pause");
	delete Ring;
	cout << "Количество колец после вызова деструктора: " << RingNode::GetAllRingsCount() << endl;
	delete[] Rings;
};


void GeometricProgram::DemoCollision()
{
	RectangleNode3 Rect1 = RectangleNode3(PointNode(0, 0), 5, 10);
	RectangleNode3 Rect2 = RectangleNode3(PointNode(2, 2), 5, 10);
	switch (CollisionManager::IsCollision(Rect1, Rect2))
	{
		case true:
		{
			cout << "Прямоугольники  пересекаются" << endl;
			break;
		}
		case false:
		{
			cout << "Прямоугольники не пересекаются" << endl;
			break;
		}
	}
	RingNode ring1 = RingNode(5, 1, 0, 0);
	RingNode ring2 = RingNode(4, 1, 2, 2);
	switch (CollisionManager::IsCollision(ring1, ring2))
	{
		case true:
		{
			cout << "Кольца  пересекаются" << endl;
			break;
		}
		case false:
		{
			cout << "Кольца не пересекаются" << endl;
			break;
		}
	}

};