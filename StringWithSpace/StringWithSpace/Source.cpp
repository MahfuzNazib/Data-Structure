#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	struct
	{
		string ID;
		string Name;
		int Marks1,Marks2,Marks3,Marks4,ava;
	}std[5];

	cout << "Enter 2 student Data : " << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter Student ID Number : ";
		cin >> std[i].ID;
		cout << "Enter Student Name : ";
		cin >> std[i].Name;
		cout << "Enter Student Marks 1 : ";
		cin >> std[i].Marks1;
		cout << "Enter Student Marks 2 : ";
		cin >> std[i].Marks2;
		cout << "Enter Student Marks 3 : ";
		cin >> std[i].Marks3;
		cout << "Enter Student Marks 4 : ";
		cin >> std[i].Marks4;
		std[i].ava = (std[i].Marks1 + std[i].Marks2 + std[i].Marks3 + std[i].Marks4) / 4;
	}

	cout << "Your Data Is : " << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "Student ID Number is : " <<std[i].ID << endl;
		cout << "Studnt Name is : " << std[i].Name << endl;
		cout << "Avarage Marks is : " << std[i].ava << endl;
	}

	return 0;
}