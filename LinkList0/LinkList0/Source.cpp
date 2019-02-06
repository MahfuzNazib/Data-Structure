#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct student
{
	int studentId;
	float studentCGPA;
	int studentAge;
	student *next;
};

student *list, *nptr, *tptr;

student * createNode(int sid, float scgpa, int sage)
{
	student *ptr = new student;
	ptr->studentId = sid;
	ptr->studentCGPA = scgpa;
	ptr->studentAge = sage;
	return ptr;
}

void createLink(student *ptr)
{
	if (list == NULL)
	{
		list = ptr;
		tptr = ptr;
	}
	else{
		tptr->next = ptr;
		tptr = ptr;
	}
}

void displayList()
{
	tptr = list;

	while (tptr != NULL)
	{
		cout << "ID: " << tptr->studentId << " CGPA: " << tptr->studentCGPA << " " << tptr->studentAge << endl;
		tptr = tptr->next;
	}
}
/*
student *beginning()
{
	return list;
}

student *end()
{
	tptr = list;
	while (tptr->next != NULL)
		tptr = tptr->next;
	//cout<<"Student id of last node is: "<<tptr->studentId<<endl;
	return tptr;
}

void insertBack(student *ptr)
{
	nptr = createNode(5, 4, 17);
	ptr->next = nptr;
	ptr = ptr->next;
}
*/
int main()
{
	list = NULL;

	nptr = createNode(1, 3.24, 18);
	createLink(nptr);
	nptr = createNode(2, 3.14, 18);
	createLink(nptr);
	nptr = createNode(3, 3.34, 18);
	createLink(nptr);
	nptr = createNode(4, 3.44, 18);
	createLink(nptr);
	displayList();
	tptr = end();
	insertBack(tptr);
	displayList();
	end();
}
