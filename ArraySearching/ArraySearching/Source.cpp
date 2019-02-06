

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	string Data;
	int Num;
	int i;
	struct 
	{
		string ID;
		string LastName;
		string MiddleName;
		string FirstName;
		string DeptName;
		string BoolGroup;
		string DOB;
		float CGPA;
		int CurSemester;
		int CurCredit;
		int CompleteCredit;
		float TotalCost;
		int PerCreditCost;
	}std[10000];
	/*
	//FacultyClass
	struct
	{
		string ID;
		string LastName;
		string MiddleName;
		string FirstName;
		string DeptName;
		string BoolGroup;
		string DOB;
		float CounHour;
		float TotalClass;
		float Selary;

	}Faculty[10000];

	//Clarck Class
	struct
	{
		string ID;
		string LastName;
		string MiddleName;
		string FirstName;
		string DeptName;
		string BoolGroup;
		string DOB;
		float WorkingHour;
		double Salary;
	}clarck[1000];
	*/
	cout << "\t\t WELCOME TO UNIVERSITY MANAGMENT SYSTEM SOFTWARE" << endl;
	cout << "\t\t##################################################" << endl;
	cout << "\t\t##################################################" << endl << endl;

	cout << "Which Class Data You Have to Stored : ";
	cin >> Data;
	cout << "Enter Number of Data : ";
	cin >> Num;

	if (Data == "Student" || "student")
	{
		cout << "Enter " << Num << " Student Data following Instraction ." << endl;
		for (i = 0; i < Num; i++)
		{
			cout << "Enter ID Number : ";
			cin >> std[i].ID;

			cout << "Student Last Name : ";
			cin >> std[i].LastName;

			cout << "Student Middle Name : ";
			cin >> std[i].MiddleName;

			cout << "Student First Name : ";
			cin >> std[i].FirstName;

			cout << "Student Department Name : ";
			cin >> std[i].DeptName;

			cout << "Student Bool Group : ";
			cin >> std[i].BoolGroup;

			cout << "Enter Student Birth Date : ";
			cin >> std[i].DOB;

			cout << "Enter Current Semester : ";
			cin >> std[i].CurSemester;

			cout << std[i].CurSemester << "th Total Credit : ";
			cin >> std[i].CurCredit;

			cout << "Total Credit Completed : ";
			cin >> std[i].CompleteCredit;

			cout << "Total Cost of " << std[i].FirstName << std[i].MiddleName << std[i].LastName << " is " << (std[i].CompleteCredit + std[i].CurCredit)*std[i].PerCreditCost << endl;

			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
		cout << Num << " Student Data Hasbeen recorded ..and Your Data is  : " << endl;
		for (i = 0; i < Num; i++)
		{
			cout << "Student ID Number : " << std[i].ID << endl;
			cout << "Student Full Name is  : " << std[i].FirstName << std[i].MiddleName << std[i].LastName << endl;
			cout << "Student Dept Name  : " << std[i].DeptName << endl;
			cout << "Date of Birth : " << std[i].DOB << endl;
			cout << "Total Cost is : " << (std[i].CompleteCredit + std[i].CurCredit)*std[i].PerCreditCost << endl;
			cout << "##################################" << endl;
		}
	}
	return 0;
}