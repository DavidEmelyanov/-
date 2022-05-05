#include <iostream>
#include <Windows.h>
#include <exception>
#include <cstdlib>
#include "functions.h"
#include "ContactNode.h"
#include "DisciplineNode.h"
#include "MovieNode.h"
#include "FlightNode.h"
#include "RectangleNode.h"
#include "SongNode.h"
#include "TimeNode.h"
#include "CircleNode.h"
#include "EnumsNode.h"
#include "MovieNodeWithGenre.h"

using namespace std;

// ��������� ������ ������������ �����
void Sort(double* values, int count)
{
    double swap;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (values[i] < values[j])
            {
                swap = values[i];
                values[i] = values[j];
                values[j] = swap;
            }
        }
    }
};

// ������������� ������ ����������
void DemoSort()
{
    int count = 0;
    do
    {
        cout << "\n������� ������� ������� ��� ������������\n";
        count = CheckInt();
    } while (count == 0);
    try
    {
        double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
        for (int i = 0; i < count; i++)
        {
            cout << values[i] << " ";
        }
        cout << endl;
        Sort(values, count);
        for (int i = 0; i < count; i++)
        {
            cout << values[i] << " ";
        }
        delete[] values;
    }
    catch (const std::exception & ex)
    {
        cout << "\n������� ����������!(" << ex.what() << ")\n";
    }
};

void WrongPointers()
{
    FlightNode Flight;
    MovieNode Movie;
    FlightNode* flight = &Flight;
    MovieNode* movie = &Movie;
    flight = CinFlightNode();
    movie = CinMovieNode();
    cout << endl << endl;
    cout << "����� Flight: " << &Flight;
    cout << endl;
    cout << "����� flight: " << flight;
    cout << endl;
    cout << "����� Movie: " << &Movie;
    cout << endl;
    cout << "����� movie: " << movie;
    cout << endl;
    //��� �������� ����� ������ "/**/"! ��������� ������, �.�. ���� ������ ������
    /*
    movie = flight;
    flight = movie;
    */
};

void DemoEnums()
{
    ���� color = ���������;
    ����_������ day = �����������;
    ���� genre = �����;
    �����_�������� student = �����;
    �������������_���������� phone = Huawei;
    �����_���� season = �����;
    //=======================================
    ���� colors[6] = { �������,�����,����������,������,���������,������� };
    ����_������ days[6] = { �������,�������,�������,�����������,�����,����������� };
    ���� genres[6] = { �����,������,����������,�������,�����,������� };
    �����_�������� students[6] = { �����,�������,�����,�������������,�������,����� };
    �������������_���������� phones[6] = { Apple,Huawei,Samsung,Huawei,LG, Lenovo};
    �����_���� seasons[6] = {����, ����, �����,����,�����,�����};
    for (int i = 0; i < 6; i++)
    {
        WriteColor(colors[i]);
    }
};

void WriteColor(���� colors)
{
    switch (colors)
    {
        case �������:
        {
            cout << "������ ������� ����.\n";
            break;
        }
        case ���������:
        {
            cout << "������ ��������� ����\n";
            break;
        }
        case ������:
        {
            cout << "������ ������ ����\n";
            break;
        }
        case �������:
        {
            cout << "������ ������� ����\n";
            break;
        }
        case �������:
        {
            cout << "������ ������� ����\n";
            break;
        }
        case �����:
        {
            cout << "������ ����� ����\n";
            break;
        }
        case ����������:
        {
            cout << "������ ���������� ����\n";
            break; 
        }
    }
};

���� ReadColor()
{
    cout << "������� ����� �� 0 �� 6 (0 � �������, 1 � ���������, 2 � ������, 3 � �������, 4 � �������, 5 � �����, 6 � ����������):\n";
    int temp;
    do
    {
        temp = CheckInt();
    } while ((temp > 6) || (temp < 0));
    switch (temp)
    {
        case �������:
        {
            return �������;
        }
        case ���������:
        {
            return ���������;
        }
        case ������:
        {
            return ������;
        }
        case �������:
        {
            return �������;
        }
        case �������:
        {
            return �������;
        }
        case �����:
        {
            return �����;
        }
        case ����������:
        {
            return ����������;
        }
    }
};

int CountRed(����* colors, int count)
{
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (colors[i] == �������)
        {
            temp++;
        }
    }
    return temp;
};

int* CountColors(����* colors, int count)
{
    int* temp = new int[����������+1];
    for (int i = 0; i < ���������� + 1; i++)
    {
        temp[i] = 0;
    }
    for (int i = 0; i < count; i++)
    {
        temp[colors[i]]++;
    }
    return temp;
};