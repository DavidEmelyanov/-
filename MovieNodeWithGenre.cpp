#pragma once
#include <iostream>
#include "functions.h"
#include "MovieNodeWithGenre.h"

using namespace std;

void DemoMovieWithGenre()
{
    MovieNodeWithGenre Movie;
    Movie.genre = �������;
    Movie.time = 28;
    Movie.rating = 7.617;
    Movie.title = "��������� �������";
    Movie.year = 1925;
    cout << endl << "���������� Movie:\n";
    ShowMovieNodeWithGenre(&Movie);
    cout << "\n\nSecond Movie:\n";
    MovieNodeWithGenre* SecondMovie = MakeMovieWithGenre("������� ��� ���������", 128, 1998, �������, 7.366);
    ShowMovieNodeWithGenre(SecondMovie);
    cout << endl;
    delete SecondMovie;
};

void ShowMovieNodeWithGenre(MovieNodeWithGenre* temp)
{
    cout << endl;
    cout << "�����: " << temp->title;
    cout << "\n����������������� � �������: " << temp->time;
    cout << "\n��� �������: " << temp->year;
    cout << "\n����: ";
    switch (temp->genre)
    {
    case �������:
    {
        cout << "�������";
        break;
    }
    case �����:
    {
        cout << "�����";
        break;
    }
    case �������:
    {
        cout << "�������";
        break;
    }
    case ������:
    {
        cout << "������";
        break;
    }
    case �����:
    {
        cout << "�����";
        break;
    }
    case ����������:
    {
        cout << "����������";
        break;
    }
    }
    cout << "\n�������: " << temp->rating << "/10";
    cout << endl;
}

MovieNodeWithGenre* CopyMovieWithGenre(MovieNodeWithGenre* Movie)
{
    MovieNodeWithGenre* temp = new MovieNodeWithGenre;
    temp->title = Movie->title;
    temp->time = Movie->time;
    temp->year = Movie->year;
    temp->genre = Movie->genre;
    temp->rating = Movie->rating;
    return temp;
};

MovieNodeWithGenre* MakeMovieWithGenre(const char* title, int time, int year, ���� genre, double rating)
{
    MovieNodeWithGenre* temp = new MovieNodeWithGenre;
    temp->title = title;
    temp->time = time;
    temp->year = year;
    temp->genre = genre;
    temp->rating = rating;
    return temp;
};

int CountMoviesByGenre(MovieNodeWithGenre** movies, int count, ���� findGenre)
{
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        if (movies[i]->genre == findGenre)
        {
            temp++;
        }
    }
    return temp;
};

MovieNodeWithGenre* FindBestGenreMovie(MovieNodeWithGenre** movies, int count, ���� findGenre)
{
    double rating = -1;
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if ((findGenre == movies[i]->genre) && (movies[i]->rating > rating))
        {
            index = i;
            rating = movies[i]->rating;
        }
    }
    MovieNodeWithGenre* temp;
    if (index != -1)
    {
        temp = CopyMovieWithGenre(movies[index]);
    }
    else
    {
        temp = new MovieNodeWithGenre;
        temp->rating = -1;
    }
    return temp;
};

void CinMovieNodeWithGenre(MovieNodeWithGenre Movies)
{
    cout << "������� �������� ������: ";
    cin >> Movies.title;
    cout << endl;
    do
    {
        cout << "������� ������� ������: ";
        cin >> Movies.rating;
        cout << endl;
    } while ((Movies.rating > 10) || (Movies.rating < 0));
    cout << "������� ���� ������: ";
    cout << "\n0 - �������; 1 - �����; 2 - �������; 3 - ������; 4 - �����; 5 - ����������;\n";
    int number;
    do
    {
        cout << "������� ����� �����: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case �������:
    {
        Movies.genre = �������;
    }
    case �����:
    {
        Movies.genre = �����;
    }
    case �������:
    {
        Movies.genre = �������;
    }
    case ������:
    {
        Movies.genre = ������;
    }
    case �����:
    {
        Movies.genre = �����;
    }
    case ����������:
    {
        Movies.genre = ����������;
    }
    }
    cout << "������� ����������������� � �������: ";
    Movies.time = CheckInt();
    cout << "������� ��� ������� ������: ";
    Movies.year = CheckInt();
};

MovieNodeWithGenre* CinMovieNodeWithGenrePointer()
{
    MovieNodeWithGenre* temp = new MovieNodeWithGenre;
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
    cout << "\n0 - �������; 1 - �����; 2 - �������; 3 - ������; 4 - �����; 5 - ����������;\n";
    int number;
    do
    {
        cout << "������� ����� �����: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case �������:
    {
        temp->genre = �������;
        break;
    }
    case �����:
    {
        temp->genre = �����;
        break;
    }
    case �������:
    {
        temp->genre = �������;
        break;
    }
    case ������:
    {
        temp->genre = ������;
        break;
    }
    case �����:
    {
        temp->genre = �����;
        break;
    }
    case ����������:
    {
        temp->genre = ����������;
        break;
    }
    }
    cout << "������� ����������������� � �������: ";
    temp->time = CheckInt();
    cout << endl;
    cout << "������� ��� ������� ������: ";
    temp->year = CheckInt();
    cout << endl;
    return temp;
};

void DemoMovieWithGenreForCount()
{
    int count;
    do
    {
        cout << "������� ���������� �������: ";
        count = CheckInt();
        cout << endl;
    } while (count < 1);
    MovieNodeWithGenre** Movies = new MovieNodeWithGenre * [count];
    cout << endl;
    for (int i = 0; i < count; i++)
    {
        Movies[i] = CinMovieNodeWithGenrePointer();
        cout << endl;
    }
    cout << endl;
    cout << "\n0 - �������; 1 - �����; 2 - �������; 3 - ������; 4 - �����; 5 - ����������;\n";
    int number;
    do
    {
        cout << "������� ����� �������� �����: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case �������:
    {
        cout << "���������� �������: " << CountMoviesByGenre(Movies, count, �������);
        break;
    }
    case �����:
    {
        cout << "���������� ����: " << CountMoviesByGenre(Movies, count, �����);
        break;
    }
    case �������:
    {
        cout << "���������� ���������: " << CountMoviesByGenre(Movies, count, �������);
        break;
    }
    case ������:
    {
        cout << "���������� ��������: " << CountMoviesByGenre(Movies, count, ������);
        break;
    }
    case �����:
    {
        cout << "���������� ������: " << CountMoviesByGenre(Movies, count, �����);
        break;
    }
    case ����������:
    {
        cout << "���������� ������������: " << CountMoviesByGenre(Movies, count, ����������);
        break;
    }
    }
    cout << endl;
};