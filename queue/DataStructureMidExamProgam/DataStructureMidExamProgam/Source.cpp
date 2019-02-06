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

void printList()
{
	tptr = list;
	while (tptr != NULL)
	{
		cout << tptr->data << " ";
		tptr = tptr->next;
	}
	cout << endl;
}
void insertat(int position, node *ptr)
{
	tptr = list;
	int i;
	for (i = 0; i < position - 1; i++)
	{
		tptr = tptr->next;
	}
	ptr->next = tptr->next;
	tptr->next = ptr;
	
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
	printList();

	insertat(-10,nptr);
	printList();
	return 0;
}