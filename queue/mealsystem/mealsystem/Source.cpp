#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

	class MemberList
	{
	public:
		string Name;
		string ID;
		int Phone;
		string Department;
	};

	class MealSyatem
	{
		float AddingTk;
		float Cost;
		float LunchMeal;
		float DinnerMeal;
		float TotalMeal;
		string Message;
	};

	void PrintListMember()
	{
		string name; string id; string dept; int phn;
		cout << "Enter Member Name : ";
		cin >> name;
		cout << "Enter Member ID No : ";
		cin >> id;
		cout << "Enter Dept Name : ";
		cin >> dept;
		cout << "Member Phone No : ";
		cin >> phn;
	}

	int main()
	{
		MemberList M1;
		
		cout << "Enter Member Name  : ";
		cin >> M1.Name;
		cout << "Enter Member ID No : ";
		cin >> M1.ID;
		cout << "Enter Member Dept  : ";
		cin >> M1.Department;
		cout << "Enter Phone Number : ";
		cin >> M1.Phone;

		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "Member Name is  : " << M1.Name << endl;
		cout << "Member ID No is : " << M1.ID << endl;
		cout << "Department Name : " << M1.Department << endl;
		cout << "Member Phone NO : " << M1.Phone << endl;

		PrintListMember();

		return 0;
	}