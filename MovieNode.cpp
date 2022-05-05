#pragma once
#include <iostream>
#include "MovieNode.h"
#include "functions.h"

using namespace std;

void ShowMovieNode(MovieNode* temp)
{
    cout << endl;
    cout << "�����: " << temp->title;
    cout << "\n����������������� � �������: " << temp->time;
    cout << "\n��� �������: " << temp->year;
    cout << "\n����: " << temp->genre;
    cout << "\n�������: " << temp->rating << "/10";
    cout << endl;
};

void DemoMovie()
{
    MovieNode* temp = new MovieNode;
    temp->title = "�������� ��������";
    temp->rating = 7.3;
    temp->genre = "�����";
    temp->time = 90;
    temp->year = 1981;
    ShowMovieNode(temp);
    delete temp;
};

MovieNode* CinMovieNode()
{
    MovieNode* temp = new MovieNode;
    cout << "������� �������� ������: ";
    cin >> temp->title;
    cout << endl;
    do
    {
        cout << "������� ������� ������: ";
        cin >> temp->rating;
        cout << endl;
    } while ((temp->rating > 10) || (temp->rating < 0));
    cout << "������� ���� ������: ";
    cin >> temp->genre;
    cout << endl;
    cout << "������� ����������������� � �������: ";
    temp->time = CheckInt();
    cout << endl;
    cout << "������� ��� ������� ������: ";
    temp->year = CheckInt();
    cout << endl;
    return temp;
};

void DemoMovieAdress()
{
    MovieNode temp;
    cout << "temp �����: " << &temp << "\n";
    temp.title = "�����";
    temp.rating = 7.117;
    temp.genre = "�����, �������";
    temp.time = 105;
    temp.year = 2008;
    cout << endl;
    ShowMovieNode(&temp);
    cout << endl;
    MovieNode* NewTemp = &temp;
    cout << endl << endl << "NewTemp �����: " << NewTemp << "\n";
    ShowMovieNode(NewTemp);
    cout << endl << endl;
    NewTemp->title = "�������� ��������";
    NewTemp->rating = 7.3;
    NewTemp->genre = "�����";
    NewTemp->time = 90;
    NewTemp->year = 1981;
    cout << "����� ���������:\n NewTemp: " << NewTemp << endl;
    ShowMovieNode(NewTemp);
    cout << endl << "temp: " << &temp;
    cout << endl;
    ShowMovieNode(&temp);
    cout << endl;
};

MovieNode* MakeMovie(const char* title, int time, int year, const char* genre, double rating)
{
    MovieNode* temp = new MovieNode;
    temp->title = title;
    temp->time = time;
    temp->year = year;
    temp->genre = genre;
    temp->rating = rating;
    return temp;
};

MovieNode* CopyMovie(MovieNode* Movie)
{
    MovieNode* temp = new MovieNode;
    temp->title = Movie->title;
    temp->time = Movie->time;
    temp->year = Movie->year;
    temp->genre = Movie->genre;
    temp->rating = Movie->rating;
    return temp;
};