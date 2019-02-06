/*#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	int que[10] = {1,3,2};
	int item, front, rear,i;

	cout << "My Present queue is : " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << que[i] << " ";
	}
	cout << endl;

	cout << "Now i want to add 100 at 3rd index Position in queue" << endl;
	if (rear == 0)
	{
		front = rear = 1;
		rear[que] = item;
	}
	else if (rear<)

	return 0;

}*/
/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
//#define MAX_SIZE=20;
int main()
{
	int que[10] = {1,3,5};
	int item, front, rear, num, i, size;
	//cout << "Enter youe Queue size : ";
	//cin >> size;

	//cout << "Enter " << size << " Queue in your array" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << que[i];
		front = 0;
		rear = size - 1;
	}
	cout << "Now Que front is " << front << " and Rear is " << rear << endl;

	cout << "Do you want to add another item in your Queue ? " << endl;

	cout << "Enter Item : ";
	cin >> item;
	//for (i = 0; i < size; i++)
	//{
		if (rear < que[i])
		{
			rear = rear + 1;
			rear[que] = item;
			//cout << "Updated que is : " << endl;
			//cout << que[i] << endl;
		}
		else
		{
			cout << "Que is overFlowed" << endl;
		}
	//}
		cout << "Updated que is : " << endl;
		for (i = 0; i < size; i++)
		{
			cout << que[i] << endl;
		}
	cout << "Update front is : " << front << " and Rear is " << rear << endl;
	return 0;
	}*/
/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int que[10] = { 1, 3, 5 };
	int item, front, rear, i;
	
	cout << "Present queue is : " << endl;
	for (i = 0; i < 10; i++)
	{
		cout << que[i] << " ";
		front = 0;
		rear = rear - 1;
	}
	cout << endl;

	cout << "Now your front is : " << front << " and Rear is : " << rear << endl;

	return 0;
}
*/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
//#define max 50;
int main()
{
	int que[10] = { 1, 2, 5 };
	int item;
	int front, rear;
	cout << "Enter Item to added in the queue : ";
	cin >> item;

	for (int i = 0; i < 10; i++)
	{
		cout << que[i+1] << " ";
	}

	return 0;
}