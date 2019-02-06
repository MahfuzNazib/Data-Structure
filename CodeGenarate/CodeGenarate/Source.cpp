#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	string Name;
	int SerialNumber;
	string PhoneNumber;
	string CodeNumber;
	int i;
	int size;

	cout << "\t\t\tOnline Business program" << endl;
	cout << "\t\t\t------------------------" << endl;
	cout << endl << endl;

	//cout << "\t\tEnter Total Customer Number : ";
	//cin >> size;
	//cout << "\t\tEnter " << size << " Customer Name And Phone Number" << endl;

	//for (i = 0; i < size; i++)
	//{
		cout << "\t\tEnter Customer Name : ";
		cin >> Name;
		cout << "\t\tEnter Cutomer Phone Number : ";
		cin >> PhoneNumber;
	//}
	cout << endl;
	//for (i = 0; i < size; i++)
	//{
	cout << Name << " \t\tCode Number is : " << Name + PhoneNumber << endl;
	//}

	return 0;
}