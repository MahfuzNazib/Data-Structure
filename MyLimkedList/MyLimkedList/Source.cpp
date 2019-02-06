#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct node
{
	int data;
	node *next, *prev;
};

node *nptr, *rear, *front;

node *CreateNewNode(int item)
{
	node *ptr;
	ptr = new(node);
	ptr->data = item;
	ptr->next = NULL;
	ptr->prev = NULL;

	return ptr;
}

void CreateLink(node *ptr)
{
	if (front == NULL)
	{
		front = ptr;
		rear = ptr;
	}
	else
	{
		front->next = rear;

	}
}