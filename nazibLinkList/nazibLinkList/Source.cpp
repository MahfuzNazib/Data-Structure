#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
/*
class Student
{
	string SID;
	string LastName;
	string FirstName;
	string Dept;
	int AddmissionYear;
	int CurrentYear;
	int TYear = AddmissionYear - CurrentYear;
};
*/
int main()
{
	string SID;
	string LastName;
	string FirstName;
	string Dept;
	int AddmissionYear;
	int CurrentYear;
	int TYear = AddmissionYear - CurrentYear;

	cout << "Enter Student Id : ";
	cin >> SID;

	cout << "Enter Student Last Name : ";
	cin >> LastName;

	cout << "Enter Student First Name : ";
	cin >> FirstName;

	cout << "Enter Addmission Year : ";
	cin >> AddmissionYear;

	cout << "Enter Current Year : ";
	cin >> CurrentYear;

	cout << "Your Input Hasbeen Completed !!" << endl;

	cout << "Student Name is   : " << FirstName << " " << LastName << endl;
	cout << "Student ID NO is  : " << SID << endl;
	//cout << "Total Year of Exp : " << TYear << endl;

	cout << "Thank You For Using This Application" << endl;
	return 0;

}