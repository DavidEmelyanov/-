#pragma once
#include <iostream>
#include "functions.h"
#include "MovieNodeWithGenre.h"

using namespace std;

void DemoMovieWithGenre()
{
    MovieNodeWithGenre Movie;
    Movie.genre = Комедия;
    Movie.time = 28;
    Movie.rating = 7.617;
    Movie.title = "Шахматная горячка";
    Movie.year = 1925;
    cout << endl << "Содержимое Movie:\n";
    ShowMovieNodeWithGenre(&Movie);
    cout << "\n\nSecond Movie:\n";
    MovieNodeWithGenre* SecondMovie = MakeMovieWithGenre("Ловушка для родителей", 128, 1998, Комедия, 7.366);
    ShowMovieNodeWithGenre(SecondMovie);
    cout << endl;
    delete SecondMovie;
};

void ShowMovieNodeWithGenre(MovieNodeWithGenre* temp)
{
    cout << endl;
    cout << "Фильм: " << temp->title;
    cout << "\nПродолжительность в минутах: " << temp->time;
    cout << "\nГод выпуска: " << temp->year;
    cout << "\nЖанр: ";
    switch (temp->genre)
    {
    case Комедия:
    {
        cout << "Комедия";
        break;
    }
    case Драма:
    {
        cout << "Драма";
        break;
    }
    case Триллер:
    {
        cout << "Триллер";
        break;
    }
    case Боевик:
    {
        cout << "Боевик";
        break;
    }
    case Ужасы:
    {
        cout << "Ужасы";
        break;
    }
    case Блокбастер:
    {
        cout << "Блокбастер";
        break;
    }
    }
    cout << "\nРейтинг: " << temp->rating << "/10";
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

MovieNodeWithGenre* MakeMovieWithGenre(const char* title, int time, int year, Жанр genre, double rating)
{
    MovieNodeWithGenre* temp = new MovieNodeWithGenre;
    temp->title = title;
    temp->time = time;
    temp->year = year;
    temp->genre = genre;
    temp->rating = rating;
    return temp;
};

int CountMoviesByGenre(MovieNodeWithGenre** movies, int count, Жанр findGenre)
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

MovieNodeWithGenre* FindBestGenreMovie(MovieNodeWithGenre** movies, int count, Жанр findGenre)
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
    cout << "Введите название фильма: ";
    cin >> Movies.title;
    cout << endl;
    do
    {
        cout << "Введите рейтинг фильма: ";
        cin >> Movies.rating;
        cout << endl;
    } while ((Movies.rating > 10) || (Movies.rating < 0));
    cout << "Введите жанр фильма: ";
    cout << "\n0 - Комедия; 1 - Драма; 2 - Триллер; 3 - Боевик; 4 - Ужасы; 5 - Блокбастер;\n";
    int number;
    do
    {
        cout << "Введите номер жанра: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case Комедия:
    {
        Movies.genre = Комедия;
    }
    case Драма:
    {
        Movies.genre = Драма;
    }
    case Триллер:
    {
        Movies.genre = Триллер;
    }
    case Боевик:
    {
        Movies.genre = Боевик;
    }
    case Ужасы:
    {
        Movies.genre = Ужасы;
    }
    case Блокбастер:
    {
        Movies.genre = Блокбастер;
    }
    }
    cout << "Введите продолжительность в минутах: ";
    Movies.time = CheckInt();
    cout << "Введите год выпуска фильма: ";
    Movies.year = CheckInt();
};

MovieNodeWithGenre* CinMovieNodeWithGenrePointer()
{
    MovieNodeWithGenre* temp = new MovieNodeWithGenre;
    cout << "Введите название фильма: ";
    cin >> temp->title;
    cout << endl;
    do
    {
        cout << "Введите рейтинг фильма: ";
        cin >> temp->rating;
        cout << endl;
    } while ((temp->rating > 10) || (temp->rating < 0));
    cout << "Введите жанр фильма: ";
    cout << "\n0 - Комедия; 1 - Драма; 2 - Триллер; 3 - Боевик; 4 - Ужасы; 5 - Блокбастер;\n";
    int number;
    do
    {
        cout << "Введите номер жанра: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case Комедия:
    {
        temp->genre = Комедия;
        break;
    }
    case Драма:
    {
        temp->genre = Драма;
        break;
    }
    case Триллер:
    {
        temp->genre = Триллер;
        break;
    }
    case Боевик:
    {
        temp->genre = Боевик;
        break;
    }
    case Ужасы:
    {
        temp->genre = Ужасы;
        break;
    }
    case Блокбастер:
    {
        temp->genre = Блокбастер;
        break;
    }
    }
    cout << "Введите продолжительность в минутах: ";
    temp->time = CheckInt();
    cout << endl;
    cout << "Введите год выпуска фильма: ";
    temp->year = CheckInt();
    cout << endl;
    return temp;
};

void DemoMovieWithGenreForCount()
{
    int count;
    do
    {
        cout << "Введите количество записей: ";
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
    cout << "\n0 - Комедия; 1 - Драма; 2 - Триллер; 3 - Боевик; 4 - Ужасы; 5 - Блокбастер;\n";
    int number;
    do
    {
        cout << "Введите номер искомого жанра: ";
        number = CheckInt();
        cout << endl;
    } while ((number < 0) || (number > 5));
    switch (number)
    {
    case Комедия:
    {
        cout << "Количество комедий: " << CountMoviesByGenre(Movies, count, Комедия);
        break;
    }
    case Драма:
    {
        cout << "Количество драм: " << CountMoviesByGenre(Movies, count, Драма);
        break;
    }
    case Триллер:
    {
        cout << "Количество триллеров: " << CountMoviesByGenre(Movies, count, Триллер);
        break;
    }
    case Боевик:
    {
        cout << "Количество боевиков: " << CountMoviesByGenre(Movies, count, Боевик);
        break;
    }
    case Ужасы:
    {
        cout << "Количество ужасов: " << CountMoviesByGenre(Movies, count, Ужасы);
        break;
    }
    case Блокбастер:
    {
        cout << "Количество блокбастеров: " << CountMoviesByGenre(Movies, count, Блокбастер);
        break;
    }
    }
    cout << endl;
};