#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int num;
	int ID;
	string Password;
	string Username;
	string FirstName;
	string LastName;
	string Dept;
	string Inistitution;
	string Phone;
	cout << "\t\tWelcome To Online Registration" << endl;
	cout << "\t\t-------------------------------" << endl;
	cout << endl;
	cout << "\t\tEnter Your Last Name : ";
	cin >> LastName;
	cout << "\t\tEnter Your First Name : ";
	cin >> FirstName;
	cout << "\t\tDepartment Name  : ";
	cin >> Dept;
	cout << "\t\tUniversity Name : ";
	cin >> Inistitution;
	cout << "\t\tEnter Phone Number : ";
	cin >> Phone;
	cout << "\t\tYour Code Number is : " << Phone << endl;
	cout << "\t\tEnter User Name : ";
	cin >> Username;
	cout << "\t\tEnter Password : ";
	cin >> Password;
	cout << "\t\t--------------------------------" << endl;
	cout << "\t\tPRESS 1 TO COMPLETE REGISTRATION  " ;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "\t\tYour Registration is Completed !!" << endl;
		break;
	case 2:
		cout << "\t\tYou are a Fucking Guy" << endl;
		break;
	default:
		cout << "Your Registration is Not Completed.Check Your Entering Data" << endl;
		break;
	}

	cout << endl << endl;
	cout << "\t\tPress 1 To see Your Registration " ;
	cin >> num;

	cout << "\t\t************************************" << endl;
	switch (num)
	{
	case 1:
		cout << "\t\tEnter Your UserName : ";
		cin >> Username;
		cout << "\t\tEnter Password : ";
		cin >> Password;
		cout << "\t\t````````````````````````" << endl;
		cout << "\t\tYour ID Number is " << Phone << endl;
		cout << "\t\tYour Name is : " << FirstName << " " << LastName << endl;
		cout << "\t\tDepartment Name : " << Dept << endl;
		cout << "\t\tUniversity Name : " << Inistitution << endl;
		cout << "\t\t@BSET OF LUCK " << LastName << " " << FirstName << endl;
	}

	return 0;
}