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
		cout << "����� �������: " << RingNode::GetAllRingsCount() << ".\n";
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
			cout << "��������� ������ ������������!\n������� ������ ������!\n";
			delete[] Rings;
		}
	} while (isCollision);
	cout << "���������� ����� �� ������ ������������: " << RingNode::GetAllRingsCount() << endl;
	system("pause");
	RingNode* Ring = new RingNode(10.0, 5.0, 25.0, 25.0);
	cout << "���������� ����� ����� ������ ������������: " << RingNode::GetAllRingsCount() << endl;
	system("pause");
	delete Ring;
	cout << "���������� ����� ����� ������ �����������: " << RingNode::GetAllRingsCount() << endl;
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
			cout << "��������������  ������������" << endl;
			break;
		}
		case false:
		{
			cout << "�������������� �� ������������" << endl;
			break;
		}
	}
	RingNode ring1 = RingNode(5, 1, 0, 0);
	RingNode ring2 = RingNode(4, 1, 2, 2);
	switch (CollisionManager::IsCollision(ring1, ring2))
	{
		case true:
		{
			cout << "������  ������������" << endl;
			break;
		}
		case false:
		{
			cout << "������ �� ������������" << endl;
			break;
		}
	}

};