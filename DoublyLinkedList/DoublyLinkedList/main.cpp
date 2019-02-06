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
	int i;
	for (i = 0; i<5; i++)
	{
		nptr = CreateNewNode(i);
		CreateLink(nptr);
	}

	PrintList();

	return 0;
}
