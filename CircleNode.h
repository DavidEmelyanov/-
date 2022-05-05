#pragma once
#include <string>

using namespace std;

struct Circle // ��������� ����
{
    double X; // X-���������� ������ �����
    double Y; // Y-���������� ������ �����
    double Radius; // ������
    string Color; // ����
};

void DemoCircleWithMakeAndCopy();
Circle* CopyCircle(Circle* circle);
Circle* MakeCircle(double X, double Y, double Radius, const char* Color);
void DemoCircle();