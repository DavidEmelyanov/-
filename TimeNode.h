#pragma once
struct TimeNode
{
	int hours;
	int minutes;
	int seconds;
};
// ��������� �����
// ������ �������� ���������
// ������������� ���� ���� (�� 0 �� 23)
// ������������� ���� ������ (�� 0 �� 60)
// ������������� ���� ������� (�� 0 �� 60)
// ����� �������� ���������

void DemoTime();
void ShowTimeNode(TimeNode* temp);
TimeNode* CinTimeNode();
void DemoTimeAdress();
TimeNode* CopyTime(TimeNode* time);
TimeNode* MakeTime(int hours, int minutes, int seconds);