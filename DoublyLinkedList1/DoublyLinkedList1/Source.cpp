/*#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct node
{
	int data;
	node *next, *prev;
};

node *nptr, *tptr, *list;

node *CreateNewNode(int item)
{
	node *ptr;
	ptr = new(node);
	ptr->next = NULL;
	ptr->data = item;
	ptr->prev = NULL;

	return ptr;
}

void Link(node *ptr)
{
	if (list == NULL)
	{
		list = ptr;
		tptr = ptr;
	}
	else
	{
		tptr->next = ptr;
		ptr->prev = tptr;
		tptr = ptr;
	}
}

void Print()
{
	tptr = list;
	while (tptr != NULL)
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;
}

//insert first

void insertfirs(node *ptr)
{
	cout << "After insert First" << endl;
	tptr = list;
	ptr->next = tptr;
	tptr->prev = ptr;
	list = ptr;

}

//insertLast

void insertlast(node *ptr)
{
	cout << "After insert Last" << endl;
	tptr = list;
	while (tptr->next != NULL)
	{
		tptr = tptr->next;
	}

	tptr->next = ptr;
	ptr->prev = tptr;
	tptr = ptr;
}

//insert middle

void insertmiddle(int position, node *ptr)
{
	cout << "After insert at position " << position << endl;
	tptr = list;
	int i;
	for (i = 0; i < position-1; i++)
	{
		tptr = tptr->next;
	}
	ptr->next = tptr->next;
	tptr->prev = ptr->next;
	tptr->next = ptr;
	ptr->prev = tptr;
}
//delete first

int main()
{
	list = NULL;
	int i;
	for (i = 0; i<5; i++)
	{
		nptr = CreateNewNode(i);
		Link(nptr);
	}
	Print();

	nptr = CreateNewNode(-1400);
	insertfirs(nptr);
	Print();

	nptr = CreateNewNode(999);
	insertlast(nptr);
	Print();

	nptr = CreateNewNode(55);
	insertmiddle(3, nptr);
	Print();
	return 0;
}
*/

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct node
{
	int data;
	node *next, *prev;
};

node *nptr, *tptr, *list;

node *CreateNewNode(int item)
{
	node *ptr;
	ptr = new(node);
	ptr->next = NULL;
	ptr->data = item;
	ptr->prev = NULL;

	return ptr;
}

void CreateLink(node *ptr)
{
	if (list == NULL)
	{
		list = ptr;
		tptr = ptr;
	}
	else
	{
		tptr->next = ptr;
		ptr->prev = tptr;
		tptr = ptr;
	}
}

void PrintList()
{
	cout << "Your Linked List is : " << endl;
	tptr = list;
	while (tptr != NULL)
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;
}

//insert first

void InsertFirst(node *ptr)
{
	cout << "After Insert First , ";
	tptr = list;
	ptr->next = tptr;
	tptr->prev = ptr;
	list = ptr;
}


//insertMiddle

void InsertMiddle(int position, node *ptr)
{
	cout << "After insert at position : " << position << " ,";
	tptr = list;
	int i;
	for (i = 0; i < position - 1; i++)
	{
		tptr = tptr->next;
	}
	ptr->next = tptr->next;
	tptr->next->prev = ptr;
	tptr->next = ptr;
	ptr->prev = tptr;


}

//InsertLast

void InsertLast(node *ptr)
{
	cout << "After Insert Middle , ";
	tptr = list;
	while (tptr->next != NULL)
	{
		tptr = tptr->next;
	}
	tptr->next = ptr->next;
	tptr->next = ptr;
	ptr->prev = tptr;
	//list = ptr;
}

//Delete First

void DeleteFirst()
{
	cout << "After Delete From First , ";
	node *ptr;
	ptr = list;
	tptr = list->next;
	list = tptr;
	tptr->prev = NULL;
	delete(ptr);
}

//DELETEFROMMIDDLE

void DeleteMiddle(int position)
{
	cout << "After Delete Position at : " << position << " ,";
	node *ptr;
	tptr = list;
	int i;
	for (i = 0; i < position - 1; i++)
	{
		tptr = tptr->next;
	}
	ptr = tptr->next;
	tptr->next = ptr->next;
	ptr->next->prev = tptr;
	delete(ptr);
}

//DeleteLast

void DeleteLast()
{
	cout << "After Delete From Last , ";
	node *ptr;
	tptr = list;
	while (tptr->next->next != NULL)
	{
		tptr = tptr->next;
	}
	ptr = tptr->next;
	tptr->next = NULL;
	delete(ptr);
}
int main()  //mainFeunction
{
	list = NULL;
	int i;
	for (i = 0; i <= 5; i++)
	{
		nptr = CreateNewNode(i);
		CreateLink(nptr);
	}
	PrintList();

	//InsertFirstFunction.
	nptr = CreateNewNode(-100);
	InsertFirst(nptr);
	PrintList();

	//insertMiddleFunction

	nptr = CreateNewNode(500);
	InsertMiddle(3, nptr);
	PrintList();

	//insertMiddleFunction

	nptr = CreateNewNode(99);
	InsertLast(nptr);
	PrintList();

	//DELETEFIRST

	DeleteFirst();
	PrintList();

	//DeleteMiddleFunction

	DeleteMiddle(3);
	PrintList();

	//DeleteLastFunction




	DeleteLast();
	PrintList();

	return 0;
}
