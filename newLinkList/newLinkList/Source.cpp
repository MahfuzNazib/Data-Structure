/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	struct node
	{
		int data;
		node *next;
	};
	node *nptr, *tptr, *list;
	list = NULL;
	int i, num, item;

	cout << "Enter your Link List size : ";
	cin >> num;

	for (i = 0; i < num; i++)
	{
		cin >> item;
		nptr = new(node);
		nptr->data = item;
		nptr->next = NULL;

		if (list == NULL)
		{
			list = nptr;
			tptr = nptr;
		}
		else
		{
			tptr->next = nptr;
			tptr = nptr;
		}

	}
	cout << "You input hasbeen completed" << endl;

	cout << "your link list is given below "<<endl;
	tptr = list;
	for (i = 0; i < num; i++)
	{
		cout << tptr->data<<" ";
		tptr = tptr->next;
	}
	cout << endl;

	return 0;
}

*/
/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *nptr, *tptr, *list;

node *CreateNewNode(int item)
{
	node *ptr;
	ptr = new(node);
	ptr->data = item;
	ptr->next = NULL;

	return nptr;
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
	while (tptr != NULL)
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;
	
}

int main()
{
	list = NULL;
	for (int i = 0; i < 5; i++)
	{
		nptr = CreateNewNode(i);
		CreateLink(nptr);
	}
	PrintList();

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
	node *next;
};

node *nptr, *tptr, *list, *ptr;

node *CreateNewNode(int item)
{
	nptr
}