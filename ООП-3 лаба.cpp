#include <iostream>
#include "ООП-3 лаба.h"
#include "BookNode.h"
#include "RouteNode.h"
#include "RectangleNode3.h"
#include "FlightNode3.h"
#include "AlbumNode.h"
#include "SongNode3.h"
#include "SongGenre.h"
#include "BandNode.h"

using namespace std;

int lab3main()
{
	int choice;
	while (true)
	{
		/*
		Все UML-диаграммы
		*/
		system("cls");
		cout << "Меню:\n";
		cout << "0) Выход из программы\n";
		cout << "1) DemoBook (3.2.2)\n";
		cout << "2) ReadBookFromConsole (3.2.3)\n";
		cout << "3) WriteBookToConsole (3.2.4)\n";
		cout << "4) FindBookByAuthor (3.2.5)\n";
		cout << "5) Route (3.2.6)\n";
		cout << "6) DemoRectangleWithPoint (3.3.3 - 3.3.5)\n";
		cout << "7) DemoFlightNode3WithTime (3.3.11)\n";
		cout << "8) DemoBand (3.4.5)\n";
		cout << "9) FindSongByGenre (3.4.6)\n";
		choice = CheckInt();
		switch (choice)
		{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				DemoBook();
				break;
			}
			case 2:
			{
				ReadBookFromConsole();
				break;
			}
			case 3:
			{
				int count;
				do 
				{
					cout << "Введите количество записей: ";
					count = CheckInt();
				} while (count < 1);
				BookNode** Book = CreateBookNodeList(count);
				cout << "\n____________\n";
				for (int i = 0; i < count; i++)
				{
					Book[i]->WriteBookToConsole();
				}
				system("pause");
				break;
			}
			case 4:
			{
				int count;
				do
				{
					cout << "Введите количество записей: ";
					count = CheckInt();
				} while (count < 1);
				BookNode** Book = CreateBookNodeList(count);
				cout << endl;
				cout << "Введите искомого автора: ";
				string author;
				string temp;
				cin >> author;
				getline(cin, temp);
				author += temp;
				int* Arr = FindBookByAuthor(Book, count, author);
				if (Arr[0] != -1)
				{
					int tempIndex = 0;
					cout << "Книги(-а) автора: \n";
					while ((Arr[tempIndex] != -1) && (tempIndex!=count))
					{
						Book[tempIndex]->WriteBookToConsole();
						tempIndex++;
					}
				}
				else
				{
					cout << "Нет книги с данным автором\n";
				}
				system("pause");
				break;
			}
			case 5:
			{
				RouteMenu();
				break;
			}
			case 6:
			{
				DemoRectangleNode3WithPoints();
				system("pause");
				break;
			}
			case 7:
			{
				DemoFlightNode3WithTime();
				system("pause");
				break;
			}
			case 8:
			{
				DemoBand();
				system("pause");
				break;
			}
			case 9:
			{
				BandNode* band = new BandNode;
				SongGenre findingGengre;
				int allSongsCount = 0;
				bool exit = false;
				while (!exit)
				{
					cout << "Для выхода введите 6\n";
					cout << "Введите номер жанра:\n0)Rap, 1)Hip_Hop, 2)Rock, 3)EDM, 4)Funk, 5)Jazz\n";
					allSongsCount = CheckInt();
						if(allSongsCount == 0)
						{
							findingGengre = Rap;
							SongNode3** Songs = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (Songs == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра Rap:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								Songs[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if (allSongsCount == 1)
						{
							findingGengre = Hip_Hop;
							SongNode3** SongsGenre = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (SongsGenre == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра Hip Hop:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								SongsGenre[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if (allSongsCount == 2)
						{
							findingGengre = Rock;
							SongNode3** SongsGenre = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (SongsGenre == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра Rock:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								SongsGenre[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if (allSongsCount == 3)
						{
							findingGengre = EDM;
							SongNode3** SongsGenre = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (SongsGenre == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра EDM:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								SongsGenre[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if (allSongsCount == 4)
						{
							findingGengre = Funk;
							SongNode3** SongsGenre = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (SongsGenre == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра Funk:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								SongsGenre[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if (allSongsCount == 5)
						{
							findingGengre = Jazz;
							SongNode3** Songs = band->GetSongsByGenre(findingGengre, allSongsCount);
							if (Songs == nullptr)
							{
								cout << "Треков в заданном жанре нет.\n";
								system("pause");
								exit = true;
								break;
							}
							cout << "\nВсе треки жанра Jazz:\n\n";
							for (int i = 0; i < allSongsCount; i++)
							{
								Songs[i]->showNode();
								cout << endl;
							}
							system("pause");
							exit = true;
							break;
						}
						if(allSongsCount == 6)
						{
							exit = true;
							break;
						}
				}
			}
		}
	}
}
