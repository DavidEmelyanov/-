#include "ООП-5 лаба.h"
#include "PersonNode.h"
#include <iostream>
#include <Windows.h>

using namespace std;


int lab5main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice = 0;
	while (true)
	{
		system("cls");
		cout << "Выберете пункт меню:\n";
		cout << "0) Выход\n";
		cout << "1) Наследование\n";
		cout << "2) Рефакторинг с выделением базового класса\n";
		cout << "3) Полиморфизм\n";
		choice = CheckInt();
		switch (choice)
		{
			case 0:
			{
				return 0;
			}
			case 1:
			{
				PersonNode pers = PersonNode("Безбородов", "Николай", "Александрович");
				TeacherNode teacher = TeacherNode("Андронов","Алексей","Владимирович","Доцент");
				StudentNode student = StudentNode("Иванов", "Иван", "Иванович", "", 2005);
				cout << "\nPersonNode: \n";
				ShowName(&pers);
				cout << "\nTeacherNode: \n";
				ShowName(&teacher);
				cout << "\nStudentNode: \n";
				ShowName(&student);
				system("pause");
				break;
			}
			case 2:
			{
				User** users = new User * [4]
				{
						new User(100000, "morkovka1995", "1995morkovka"),
						new User(100001, "ilon_mask", "X æ A-12"),
						new User(100002, "megazver", "password"),
						new User(100003, "yogurt", "ksTPQzSu"),
				};
				PaidUser** paidUsers = new PaidUser * [4]
				{
					new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
						new PaidUser(200001, "system_exe", "UgfkDGmU"),
						new PaidUser(200002, "RazorQ", "TBgRnbCP"),
						new PaidUser(200003, "schdub", "CetyQVID"),
				};
				string login = "megazver";
				string password = "password";
				for (int i = 0; i < 4; i++)
				{
					if (users[i]->Login(login, password))
					{
						cout << "Signed in as: " << users[i]->GetLogin() << endl;
					}
				}
				login = "system_exe";
				password = "UgfkDGmU";
				for (int i = 0; i < 4; i++)
				{
					if (paidUsers[i]->Login(login, password))
					{
						cout << "Signed in as: " << paidUsers[i]->GetLogin() << endl;
					}
				}
				for (int i = 0; i < 4; i++)
				{
					delete users[i];
				}
				delete[] users;
				for (int i = 0; i < 4; i++)
				{
					delete paidUsers[i];
				}
				delete[] paidUsers;
				system("pause");
				break;
			}
			case 3:
			{
				const int productsCount = 4;
				Product products[productsCount];
				products[0] = Product("Курица", 250, meat);
				products[1] = Product("Кефир", 55, milk_products);
				products[2] = Product("Domestos", 300, household_chemicals);
				products[3] = Product("Молоко", 80, milk_products);

				PercentDiscount* percentDicsount = new PercentDiscount(50, milk_products);
				CertificateDiscount* certificate = new CertificateDiscount(500, household_chemicals);

				DiscountBase* arrDiscounts[2];
				arrDiscounts[0] = percentDicsount;
				arrDiscounts[1] = certificate;

				ShowCheckWithDiscount(arrDiscounts[1], products, productsCount);
			}
			default:
			{
				cout << "Выберете один из предложенных пунктов!\n";
				system("pause");
				break;
			}
		}
	}
};
