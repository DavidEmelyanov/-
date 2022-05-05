#include <iostream>
#include <Windows.h>
#include "ООП-2 лаба.h"
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

int lab2main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true)
    {
        system("cls");
        cout << "\t\tВыберете пункт меню:\t\n";
        cout << "0) Выход                  \n";
        cout << "1) Демонстрация сортировки\n";
        cout << "2) Демонстрация DEMO-функций для структур\n";
        cout << "3) Rectangle ручной ввод(1 и более)\n";
        cout << "4) Flight ручной ввод(1 и более)\n";
        cout << "5) Movie ручной ввод(1 и более)\n";
        cout << "6) Time ручной ввод(1 и более)\n";
        cout << "7) Передача новой переменной адреса в DemoRectangle()\n";
        cout << "8) WrongPointers\n";
        cout << "9) Передача по ссылке. Считывание и вывод.(2.2.5.1-2.2.5.2)\n";
        cout << "10) DemoReadAndWriteRectangles\n";
        cout << "11) Exchange\n";
        cout << "12) Максимальная длина прямоугольника\n";
        cout << "13) Максимальная площадь прямоугольника\n";
        cout << "14) DemoDynamicFlight\n";
        cout << "15) DemoDynamicFlights и FindShortestFlight\n";
        cout << "16) Circle\n";
        cout << "17) Make и Copy 4х нод\n";
        cout << "18) DemoEnums + WriteColor\n";
        cout << "19) ReadColor + WriteColor + CountRed+CountColors\n";
        cout << "20) DemoMovieWithGenre + MakeMovieWithGenre\n";
        cout << "21) DemoMovieWithGenreForCount + CountMoviesByGenre\n";
        cout << "22) FindBestGenreMovie\n";
        cout << "Введите пункт меню и нажмите ENTER\n";
        cout << "Выбранный пункт меню: ";
        int number = CheckInt();
        switch (number)
        {
        case 0:
        {
            cout << "Выход из программы...\n";
            return 0;
        }
        case 1:
        {
            DemoSort();
            cout << endl;
            system("pause");
            break;
        }
        case 2:
        {
            cout << "Демонстрация DEMO-функций:\n";
            cout << "\nDemoRectangle:\n";
            DemoRectangle();
            cout << "\nDemoFlight:\n";
            DemoFlight();
            cout << "\nDemoMovie:\n";
            DemoMovie();
            cout << "\n\nDemoTime:\n";
            DemoTime();
            cout << endl;
            system("pause");
            break;
        }
        case 3:
        {
            int count;
            do
            {
                cout << "Введите количество операций: ";
                count = CheckInt();
                cout << endl;
            } while (count < 0);
            RectangleNode** Rectangle = new RectangleNode * [count];
            for (int i = 0; i < count; i++)
            {
                cout << "Введите Rectangle " << i + 1 << ":\n";
                Rectangle[i] = CinRectangleNode();
            }
            cout << endl << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Прямоугольник " << i + 1 << ":\n";
                ShowRectangleNode(Rectangle[i]);
            }
            system("pause");
            break;
        }
        case 4:
        {
            int count;
            do
            {
                cout << "Введите количество операций: ";
                count = CheckInt();
                cout << endl;
            } while (count < 1);
            FlightNode** Flight = new FlightNode * [count];
            for (int i = 0; i < count; i++)
            {
                cout << "Введите рейс " << i + 1 << ":\n";
                Flight[i] = CinFlightNode();
            }
            cout << endl << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Рейс " << i + 1 << ":\n";
                ShowFlightNode(Flight[i]);
            }
            system("pause");
            break;
        }
        case 5:
        {
            int count;
            do
            {
                cout << "Введите количество операций: ";
                count = CheckInt();
                cout << endl;
            } while (count < 0);
            MovieNode** Movie = new MovieNode * [count];
            for (int i = 0; i < count; i++)
            {
                cout << "Введите Фильм " << i + 1 << ":\n";
                Movie[i] = CinMovieNode();
            }
            cout << endl << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Фильм №" << i + 1 << ":\n";
                ShowMovieNode(Movie[i]);
            }
            system("pause");
            break;
        }
        case 6:
        {
            int count;
            do
            {
                cout << "Введите количество операций: ";
                count = CheckInt();
                cout << endl;
            } while (count < 0);
            TimeNode** Time = new TimeNode * [count];
            for (int i = 0; i < count; i++)
            {
                cout << "Введите Время " << i + 1 << ":\n";
                Time[i] = CinTimeNode();
            }
            cout << endl << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Время №" << i + 1 << ":";
                ShowTimeNode(Time[i]);
                cout << endl;
            }
            system("pause");
            break;
        }
        case 7:
        {
            cout << "Rectangle" << endl;
            DemoRectangleAdress();
            cout << endl << endl << endl;
            cout << "Flight" << endl;
            DemoFlightAdress();
            cout << endl << endl << endl;
            cout << "Movie" << endl;
            DemoMovieAdress();
            cout << endl << endl << endl;
            cout << "Time" << endl;
            DemoTimeAdress();
            cout << endl;
            system("pause");
            break;
        }
        case 8:
        {
            WrongPointers();
            cout << "Если программа запустилась, значит вы не удалили /**/ в функции.\n";
            system("pause");
            break;
        }
        case 9:
        {
            RectangleNode rectangle;
            ReadRectangle(rectangle);
            WriteRectangle(rectangle);
            cout << endl;
            system("pause");
            break;
        }
        case 10:
        {
            DemoReadAndWriteRectangles();
            system("pause");
            break;
        }
        case 11:
        {
            RectangleNode rectangle1;
            RectangleNode rectangle2;
            ReadRectangle(rectangle1);
            ReadRectangle(rectangle2);
            cout << endl;
            cout << "Содержимое прямоугольников: " << endl;
            cout << "Rectangle1:" << endl;
            WriteRectangle(rectangle1);
            cout << endl;
            cout << "Rectangle2:" << endl;
            WriteRectangle(rectangle2);
            cout << endl;
            Exchange(rectangle1, rectangle2);
            cout << "Содержимое прямоугольников после обмена: " << endl;
            cout << "Rectangle1:" << endl;
            WriteRectangle(rectangle1);
            cout << endl;
            cout << "Rectangle2:" << endl;
            WriteRectangle(rectangle2);
            cout << endl;
            system("pause");
            break;
        }
        case 12:
        {
            int count;
            do
            {
                cout << "Введите количество прямоугольников: ";
                count = CheckInt();
                cout << endl;
            } while (count <= 0);
            RectangleNode* Rectangle = new RectangleNode[count];
            for (int i = 0; i < count; i++)
            {
                cout << "Прямоугольник " << i + 1;
                cout << endl;
                ReadRectangle(Rectangle[i]);
            }
            FindRectangle(Rectangle, count);
            delete Rectangle;
        }
        case 13:
        {
            int count;
            do
            {
                cout << "Введите количество прямоугольников: ";
                count = CheckInt();
                cout << endl;
            } while (count <= 0);
            RectangleNode* Rectangle = new RectangleNode[count];
            for (int i = 0; i < count; i++)
            {
                cout << "Прямоугольник " << i + 1;
                cout << endl;
                ReadRectangle(Rectangle[i]);
            }
            FindMaxRectangle(Rectangle, count);
            system("pause");
            break;
        }
        case 14:
        {
            DemoDynamicFlight();
            system("pause");
            break;
        }
        case 15:
        {
            DemoDynamicFlights();
            system("pause");
            break;
        }
        case 16:
        {
            DemoCircle();
            system("pause");
            cout << "\n_________________\n";
            DemoCircleWithMakeAndCopy();
            system("pause");
            break;
        }
        case 17:
        {
            cout << "Flight";
            FlightNode* Flight = MakeFlight("Симферополь", "Казань", 150);
            cout << endl;
            ShowFlightNode(Flight);
            FlightNode* FlightCopy = CopyFlight(Flight);
            cout << "\nFlightCopy:\n";
            ShowFlightNode(FlightCopy);
            cout << endl;
            system("pause");
            cout << endl << endl;
            MovieNode* Movie = MakeMovie("Перед рассветом", 105, 1995, "Драма", 7.2);
            cout << endl << "Movie:\n";
            ShowMovieNode(Movie);
            cout << endl << "MovieCopy:\n";
            MovieNode* MovieCopy = CopyMovie(Movie);
            ShowMovieNode(MovieCopy);
            system("pause");
            cout << endl << "Rectangle:\n";
            RectangleNode* Rectangle = MakeRectangle("Чёрный", 150, 120);
            ShowRectangleNode(Rectangle);
            cout << endl << "RectangleCopy\n";
            RectangleNode* RectangleCopy = CopyRectangle(Rectangle);
            ShowRectangleNode(RectangleCopy);
            system("pause");
            cout << endl << "Time:\n";
            TimeNode* Time = MakeTime(23, 34, 27);
            ShowTimeNode(Time);
            cout << endl << "TimeCopy:\n";
            TimeNode* TimeCopy = CopyTime(Time);
            ShowTimeNode(TimeCopy);
            system("pause");
            break;
        }
        case 18:
        {
            DemoEnums();
            system("pause");
            break;
        }
        case 19:
        {
            int count;
            do
            {
                cout << "Введите количество цветов: ";
                count = CheckInt();
                cout << endl;
            } while (count < 1);
            Цвет* Colors = new Цвет[count];
            for (int i = 0; i < count; i++)
            {
                cout << endl;
                Colors[i] = ReadColor();
            }
            cout << "\nВывод массива:\n";
            for (int i = 0; i < count; i++)
            {
                WriteColor(Colors[i]);
                cout << endl;
            }
            cout << endl << "\nКоличество красных: " << CountRed(Colors, count) << endl;
            cout << endl;
            int* ColorsCount = CountColors(Colors, count);
            for (int i = 0; i < Фиолетовый + 1; i++)
            {
                switch (i)
                {
                case Красный:
                {
                    cout << "Красных: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Оранжевый:
                {
                    cout << "Оранжевых: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Желтый:
                {
                    cout << "Желтых: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Зеленый:
                {
                    cout << "Зеленых: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Голубой:
                {
                    cout << "Голубых: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Синий:
                {
                    cout << "Синих: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                case Фиолетовый:
                {
                    cout << "Фиолетовых: " << ColorsCount[i];
                    cout << endl;
                    break;
                }
                }
            }
            cout << endl;
            delete[] ColorsCount;
            system("pause");
            break;
        }
        case 20:
        {
            DemoMovieWithGenre();
            system("pause");
            break;
        }
        case 21:
        {
            DemoMovieWithGenreForCount();
            system("pause");
            break;
        }
        case 22:
        {
            int count;
            do
            {
                cout << "Введите количество записей: ";
                count = CheckInt();
                cout << endl;
            } while (count < 1);
            MovieNodeWithGenre** Movie = new MovieNodeWithGenre * [count];
            for (int i = 0; i < count; i++)
            {
                Movie[i] = CinMovieNodeWithGenrePointer();
            }
            cout << "\n\nВ Movie сейчас: \n";
            for (int i = 0; i < count; i++)
            {
                ShowMovieNodeWithGenre(Movie[i]);
            }
            cout << "\n\n";
            cout << "\n0 - Комедия; 1 - Драма; 2 - Триллер; 3 - Боевик; 4 - Ужасы; 5 - Блокбастер;\n";
            int number;
            do
            {
                cout << "Введите номер искомого жанра: ";
                number = CheckInt();
                cout << endl;
            } while ((number < 0) || (number > 5));
            cout << "Наивысший рейтинг фильма с выбранным жанром:\n\n";
            MovieNodeWithGenre* temp;
            switch (number)
            {
            case Комедия:
            {
                temp = FindBestGenreMovie(Movie, count, Комедия);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            case Драма:
            {
                temp = FindBestGenreMovie(Movie, count, Драма);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            case Триллер:
            {
                temp = FindBestGenreMovie(Movie, count, Триллер);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            case Боевик:
            {
                temp = FindBestGenreMovie(Movie, count, Боевик);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            case Ужасы:
            {
                temp = FindBestGenreMovie(Movie, count, Ужасы);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            case Блокбастер:
            {
                temp = FindBestGenreMovie(Movie, count, Блокбастер);
                if (temp->rating != -1)
                {
                    ShowMovieNodeWithGenre(temp);
                }
                else
                {
                    cout << "Выбранного жанра нет в списке фильмов.\n";
                }
                break;
            }
            }
            cout << endl;
            system("pause");
            break;
        }
        default:
        {
            cout << "Введите корректные данные!\n";
            system("pause;");
        }
        }
    }
}