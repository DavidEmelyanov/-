#include "User.h"

bool User::LoginCheck()
{
	bool x = true;
	char check[] = { '{', '}', '<', '>', '@', '#', '$', '%', '^', ':', '*' };
	for (int i = 0; i < this->_login.length(); i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (this->_login[i] == check[j])
			{
				x = false;
				throw exception("Invalid symbol(s) in password!");
			}
		}
		if (!x)
		{
			break;
		}
	}
	return x;
};

void User::SetId(int id)
{
	_id = id;
};

void User::SetLogin(string login)
{
	_login = login;
};

void User::SetPassword(string password)
{
	_password = password;
};

int User::GetId()
{ 
	return _id; 
};

string User::GetLogin() 
{ 
	return _login; 
};

string User::GetPassword() 
{ 
	return _password;
};

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
};

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}; 

bool User::Login(string enteredLogin, string enteredPassword)
{
	if (this->GetLogin() == enteredLogin)
	{
		if (this->IsCorrectPassword(enteredPassword))
		{
			return true;
		}
		else
		{
			throw exception("Uncorrect password");
		}
	}
	return false;
};