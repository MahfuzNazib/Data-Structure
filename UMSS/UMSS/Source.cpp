
/*
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

			cout << std[i].CurSemester << "th Semester Total Credit : ";
			cin >> std[i].CurCredit;

			cout << "Enter Per Credit Cost at AIUB : ";
			cin >> std[i].PerCreditCost;

			cout << "Total Credit Completed : ";
			cin >> std[i].CompleteCredit;

			cout << "Total Cost of " << std[i].FirstName << " " << std[i].MiddleName << " " << std[i].LastName << " is " << (std[i].CompleteCredit + std[i].CurCredit)*std[i].PerCreditCost << endl;

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
*/
//#################################################
//NEW CONSOLE OF UNIVERSITY MANAGMENT SYSTEM
//#################################################

/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;


struct DeptHead
{
	string DeptHeadID;

	string MiddleName;
	string LastName;
	string FirstName;

	string DeptName;

	int TotalThesisNumber;

	string YearJoiningDate;
	string MonthJoiningDate;
	string DayJoiningDate;

	string YearNow;
	string MonthNow;
	string Day;

	int Experience;

	//personal Information
	string DOB;
	string PhD;
	float GradePhd;
	string Masters;
	float GradeMasters;
	string Bachalore;
	float GradeBachalors;
	string College;
	float GradeCollege;
	string School;
	float GradeSchool;
	string BloodGroup;

}head[10000];
struct Faculty
{
	string FID;
};


int main()
{
	int i;
	int Number;

	cout << "\t\t\tWELCONE TO UNIVERSITY MANAGEMENT SYSTEM" << endl;
	cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

	cout << "Enter Number : ";
	cin >> Number;

	cout << "Enter " << Number << " Members Information " << endl;

	for (i = 0; i < 2; i++)
	{
		cout << "Enter ID Number : ";
		cin>> head[i].DeptHeadID ;
		cout << "Last Name : ";
		cin>> head[i].LastName ;
		cout << "First Name : ";
		cin>> head[i].FirstName ;
		cout << "Middle Name : ";
		cin>> head[i].MiddleName ;
		cout << "Enter Department Name : ";
		cin>> head[i].DeptName ;
		cout << "Enter Total Numbers of Thesis : ";
		cin>> head[i].TotalThesisNumber ;
		cout << "Enter Year of Joining  : ";
		cin>> head[i].YearJoiningDate ;
		cout << "Enter Month of Joining  : ";
		cin>> head[i].MonthJoiningDate ;
		cout << "Enter Day of Joining  : ";
		cin>> head[i].DayJoiningDate ;
		
		cout << "Enter Year of NOw  : ";
		cin>> head[i].YearNow ;
		cout << "Enter Month of NOw  : ";
		cin>> head[i].MonthNow ;
		cout << "Enter Day of NOw  : ";
		cin>> head[i].Day ;

		cout << "PHD : ";
		cin>> head[i].PhD ;
		cout << "Masters : ";
		cin>> head[i].Masters ;
		cout << "Bachalores : ";
		cin>>head[i].Bachalore ;
		cout << "HSC : ";
		cin>> head[i].College ;
		cout << "SCC : ";
		cin>> head[i].School ;

		cout << "Grade of PHD : ";
		cin>> head[i].GradePhd ;
		cout << "Grade of Masters : ";
		cin>> head[i].GradeMasters ;
		cout << "Geade of Bachalors : ";
		cin>> head[i].GradeBachalors ;
		cout << "Grade HSC : ";
		cin>> head[i].GradeCollege ;
		cout << "Grade of SSC : ";
		cin>> head[i].GradeSchool ;
		
		cout << "Input hasbeen Completed !!@@" << endl;
		cout << "*********************************************************" << endl;
	}

	cout << "##############################################" << endl;
	cout << "Your Data are : " << endl;

	cout << "We will show The Educational Quaification in this time in this system" << endl;
	for (i = 0; i < 2; i++)
	{
		cout << "  PhD  |   Masters    |     Bachalore      |        HSC      |       SSC        |" << endl;
		cout << head[i].GradePhd << "	|" << head[i].GradeMasters << "		|" << head[i].GradeBachalors << "		|" << head[i].GradeCollege << "		|" << head[i].GradeSchool << endl;

		//cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}

	return 0;
}
*/
/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int n;
	int choose;
	cout << "\t\t\tWELCOME TO STUDENT MANAGMENT SYSTEM" << endl;
	cout << "\t\t\t-------------------------------------" << endl;
	
	cout << "\t* This is a console application managment system software."<<endl;
	cout << "\t* It will made onli C++ Programming.." << endl;
	cout << "\t* The using IDE is Microsoft Visual Studio 2013.." << endl;
	cout << "\t* The time complexsity id log(n^0).." << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	
	cout << "\t\t Press 1 To Start this Console Application : " ;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "\t\t---------------------------------------------------" << endl;
		cout << "\t\t---------------------------------------------------" << endl;
		cout << "\t\t Application\t\tPressTo\t\tMemoryAccess" << endl;
		cout << "\t\t-------------\t\t-------\t\t-----------" << endl;
		cout << "\t\t Student Managment\t 01\t\t253KB" << endl;
		cout << "\t\t Faculty Managment\t 02\t\t253KB" << endl;
		cout << "\t\t Clarck Managment\t 03\t\t253KB" << endl;
		cout << "\t\t DataBase Managment\t 04\t\t253KB" << endl;
		cout << "\t\t EXIT Program\t\t--\t\t--" << endl;
		cout << "\t\t--------------------------------------------------" << endl;
		cout << "\t\t--------------------------------------------------" << endl;
			
	default:
		break;
	}

	cout << "\t\t\tEnter your Choose Number : ";
	cin >> choose;
	switch (choose)
	{
	case 1:
	{
		cout << "\t\t\tWelcome to Student Management System Page" << endl;
		cout << "\t\t\t-----------------------------------------" << endl;
		cout << endl;
		cout << "\t\tStudent Name : " << endl;
		cout << "\t\tStudent Name : " << endl;
		cout << "\t\tStudent Name : " << endl;
		cout << "\t\tStudent Name : " << endl;
		cout << "\t\tStudent Name : " << endl;
	}
	case 2:
	{
		cout << "\t\t\tWelcome to Faculty Management System Page" << endl;
		cout << "\t\t\t-----------------------------------------" << endl;
		cout << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
	}
	case 3:
	{
		cout << "\t\t\tWelcome to Clarke Management System Page" << endl;
		cout << "\t\t\t-----------------------------------------" << endl;
		cout << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
	}
	case 4:
	{
		cout << "\t\t\tWelcome to DataBase Management System Page" << endl;
		cout << "\t\t\t-----------------------------------------" << endl;
		cout << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
		cout << "\t\tFaculty Name : " << endl;
	}
	default :
		cout << "\t\tPlease Enter a valid Number " << endl;
		break;
	}
	
	switch (std)
	{
	case 0:
		cout << "\t\t0. Go to Student Managment System" << endl;
	case 1:
		cout << "\t\t1. Go to Faculty Managment System" << endl;
	case 2:
		cout << "\t\t2. Go to Clarck Managment System." << endl;
	case 3:
		cout << "\t\t3. Go to University Data Base Management System." << endl;
	case 4:
		cout << "\t\t4. EXIT Program" << endl;
	default:
		break;

	}
	
	return 0;
}

*/

#include <iostream>

#include <cstdio>

#include <cstring>

#include <cstdlib>

#include <conio.h>

#include <iomanip>



using namespace std;
int main() {

	FILE *fp, *ft;

	char another, choice;



	struct student {

		char first_name[50], last_name[50];

		char course[100];

		int section;

	};



	struct student e;
	char xfirst_name[50], xlast_name[50];
	long int recsize;

	fp = fopen("users.txt", "rb+");

	if (fp == NULL) {
		fp = fopen("users.txt", "wb+");

		if (fp == NULL)
		{
			puts("Cannot open file");
			return 0;
		}
	}


	recsize = sizeof(e);

	while (1) {
		system("cls");

		cout << "\t\t====== STUDENT INFORMATION SYSTEM ======";
		cout << "\n\n                                          ";
		cout << "\n\n";
		cout << " \n\t\t\t======================";
		cout << "\n \t\t\t  1. Add    Records";
		cout << "\n \t\t\t  2. List   Records";
		cout << "\n \t\t\t  3. Modify Records";
		cout << "\n \t\t\t  4. Delete Records";
		cout << "\n \t\t\t  5. Exit   Program";
		cout << " \n\t\t\t======================";
		cout << "\n\n";
		cout << "\t\t\t Select Your Choice ::";
		fflush(stdin);
		choice = getche();
		switch (choice)
		{
		case '1':
			fseek(fp, 0, SEEK_END);
			another = 'Y';
			while (another == 'Y' || another == 'y')
			{
				system("cls");
				cout << "Enter the First Name : ";
				cin >> e.first_name;
				cout << "Enter the Last Name : ";
				cin >> e.last_name;
				cout << "Enter the Course    : ";
				cin >> e.course;
				cout << "Enter the Section   : ";
				cin >> e.section;
				fwrite(&e, recsize, 1, fp);
				cout << "\n Add Another Record (Y/N) ";
				fflush(stdin);
				another = getchar();
			}
			break;
		case '2':
			system("cls");
			rewind(fp);
			cout << "=== View the Records in the Database ===";
			cout << "\n";
			while (fread(&e, recsize, 1, fp) == 1){
				cout << "\n";
				cout << "\nName     :: " << e.first_name << " " << e.last_name;
				//cout << "\n";
				cout << "\nCourse   :: " << e.course;
				cout << "\nSection  :: " << e.section;
			}
			cout << "\n\n";
			system("pause");
			break;

		case '3':
			system("cls");
			another = 'Y';
			while (another == 'Y' || another == 'y')
			{
				cout << "\n Enter the last name of the student : ";
				cin >> xlast_name;

				rewind(fp);
				while (fread(&e, recsize, 1, fp) == 1)
				{
					if (strcmp(e.last_name, xlast_name) == 0)
					{
						cout << "Enter new the Firt Name : ";
						cin >> e.first_name;
						cout << "Enter new the Last Name : ";
						cin >> e.last_name;
						cout << "Enter new the Course    : ";
						cin >> e.course;
						cout << "Enter new the Section   : ";
						cin >> e.section;
						fseek(fp, -recsize, SEEK_CUR);
						fwrite(&e, recsize, 1, fp);
						break;
					}
					else
						cout << "record not found";
				}
				cout << "\n Modify Another Record (Y/N) ";
				fflush(stdin);
				another = getchar();
			}
			break;


		case '4':
			system("cls");
			another = 'Y';
			while (another == 'Y' || another == 'y')
			{
				cout << "\n Enter the last name of the student to delete : ";
				cin >> xlast_name;

				ft = fopen("temp.dat", "wb");

				rewind(fp);
				while (fread(&e, recsize, 1, fp) == 1)

				if (strcmp(e.last_name, xlast_name) != 0)
				{
					fwrite(&e, recsize, 1, ft);
				}
				fclose(fp);
				fclose(ft);
				remove("users.txt");
				rename("temp.dat", "users.txt");

				fp = fopen("users.txt", "rb+");

				cout << "\n Delete Another Record (Y/N) ";
				fflush(stdin);
				another = getchar();
			}

			break;

		case '5':
			fclose(fp);
			cout << "\n\n";
			cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE";
			cout << "\n\n";
			exit(0);
		}
	}
	//em("pause");
	return 0;
}