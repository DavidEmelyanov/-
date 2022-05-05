#pragma once
#include <string>
#include <iostream>

using namespace std;

//////////////////////// User - обычный пользователь
class User
{
	int _id;
	string _login;
	string _password;
	void SetId(int id);
	bool LoginCheck();
public:
	void SetLogin(string login);
	void SetPassword(string password);
	int GetId();
	string GetLogin();
	string GetPassword();
	User(int id, string login, string password);
	bool IsCorrectPassword(string password); 
	bool Login(string enteredLogin, string enteredPassword);
};