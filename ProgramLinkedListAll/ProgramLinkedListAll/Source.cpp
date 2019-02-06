/*#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct node
{
	int data;
	node *next, *prev;
};

node *list, *nptr, *tptr;

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
	tptr = list;
	while (tptr != NULL)
	
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;
}

void InsertFirst(node *ptr)
{
	cout << "After Insert First Position" << endl;
	tptr = list;
	ptr->next = tptr;
	tptr->prev = ptr;
	list = ptr;
	
}

void InsertMiddle(int position, node *ptr)
{
	cout << "After insert at position " << position << endl;
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

void InsertLast(node *ptr)
{
	cout << "After Insert Last Position" << endl;
	tptr = list;
	while (tptr->next != NULL)
	{
		tptr = tptr->next;
	}
	tptr->next = ptr->next;
	tptr->next = ptr;
	ptr->prev = tptr;
}

void DeleteFirst()
{

	cout << "After cDeleting From First Element " << endl;
	node *ptr;
	ptr = list;
	tptr = list->next; 
	list = tptr;
	tptr->prev = NULL;
	delete (ptr);

	
}

void DeleteMiddle(int position)
{
	cout << "After Deleting at position " << position << endl;
	node *ptr;
	tptr = list;
	int i;
	for (i = 0; i < position - 1; i++)
	{
		tptr = tptr->next;
	}
	ptr = tptr->next;
	ptr->next->prev = tptr;
	tptr->next = ptr->next;
	delete (ptr);
}

void DeleteLast()
{
	cout << "Deleting Last Element " << endl;
	node *ptr;
	tptr = list;
	while (tptr->next->next != NULL)
	{
		tptr = tptr->next;
	}
	ptr = tptr->next;
	tptr->next = NULL;
	delete (ptr);
}
int main()
{
	list = NULL;
	int i;
	for (i = 0; i < 5; i++)
	{
		nptr = CreateNewNode(i);
		CreateLink(nptr);
	}
	PrintList();

	nptr = CreateNewNode(100);
	InsertFirst(nptr);
	PrintList();

	nptr = CreateNewNode(-55);
	InsertMiddle(3, nptr);
	PrintList();

	nptr = CreateNewNode(9999);
	InsertLast(nptr);
	PrintList();

	DeleteFirst();
	PrintList();

	DeleteMiddle(4);
	PrintList();

	DeleteLast();
	PrintList();
	return 0;
}
*/


#include <iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct node
{
	int data;
	node *next ;
};

node *list, *nptr, *tptr;

node *CreateNewNode(int item)
{
	node *ptr;
	ptr->data = item;
	ptr->next = NULL;

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
		tptr = ptr;
	}
}


void PrintList()
{
	tptr = list;

}

/*#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;


struct node
{
	int data;
	node *next;
};
node *nptr, *tptr, *list;


node *CreateNode(int item)
{

	node *ptr;
	ptr = new(node);
	ptr->next = NULL;
	ptr->data = item;

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
		tptr = ptr;
	}

}

void PrintList()
{
	cout << "\t\tYour List is : ";
	tptr = list;
	while (tptr != NULL)
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;

}
int main()
{

	int num;
	string ask;
	cout << "\t\t\t Linked List Projects" << endl;
	cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "\t\t01.Singly Linked List Programming" << endl;
	cout << "\t\t02.Doubly Linked List Programming" << endl;
	cout << endl;
	cout << "\t\tEnter Your Choosing Number : ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << endl;
		cout << "\t\tWelcome To Singly Linked List Programming" << endl;
		cout << endl;
		cout << "\t\t----------------------------------------------" << endl;
		cout << "\t\tDo you Want to Create Link ? (y/n) : ";
		cin >> ask;
		if (ask == "y")
		{

			list = NULL;
			int i;
			int size;
			int item;
			cout << "\t\tEnter your Linked List Size : ";
			cin >> size;
			cout << "\t\tEnter " << size << " Number : ";
			for (i = 0; i<size; i++)
			{
				cin >> item;

				nptr = CreateNode(i);
				Link(nptr);
			}
			PrintList();
		}
		else
		{
			cout << "\t\tThank you for your Patience @" << endl;
		}
		break;
	case 2:
		cout << endl;
		cout << "\t\tWelcome To Doubly Linked List Programming" << endl;
		cout << "\t\t----------------------------------------------" << endl;
		break;
	default:
		cout << endl;
		cout << endl;
		cout << "\t\tEntering Number is Out of Range" << endl;
		break;

	}

	return 0;
}

*/