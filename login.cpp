#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <stdlib.h>
using namespace std;

int uczniowie;
int cukierki;
int x;
int y;
string PIN;
string login;
string haslo;




int pass1()
{
	cout << "Enter password: ";
	cin >> login;
	if (login == "Zordon")
	{
		cout << "User is right, press enter to continue" << endl;
		system("PAUSE > nul");
		system("cls");
        // insert your custom script //
		ShellExecute(0, 0, L"https://azordon.cf/", 0, 0, SW_SHOW);
		// insert your custom script //
	}  
	else
	{
		cout << "Password is wrong, press enter to try again" << endl;
		system("PAUSE > nul");
		system("cls");
		return pass1();
	}

}

int login1()
{
	cout << "enter username: ";
	cin >> login;
	if (login == "Root")
	{
		cout << "User is right, press enter to continue" << endl;
		system("PAUSE > nul");
		system("cls");
		return pass1();
	}
	else
	{
		cout << "User is wrong, press enter to try again" << endl;
		system("PAUSE > nul");
		system("cls");
		return login1();
	}
}

int main()
{
	return login1();
}

