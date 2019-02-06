//selection sorting
/*
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int arr[100];
	int i, j, temp, size;

	cout << "Enter your Array size : ";
	cin >> size;

	cout << "Enter " << size << " array " << endl;

	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Before Selection sorting ,Your array is : " << endl;

	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "After Selection sorting , Your array is : " << endl;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}



	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;
}

*/

//insertion sorting

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	int arr[100];
	int i, j, key;
	int size;

	cout << "Enter your array size : ";
	cin >> size;

	cout << "Enter " << size << " Array : " << endl;

	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << "Your array is : " << endl;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "After Insertion sorting your array is : " << endl;

	for (j = 2; j < size; j++)
	{
		key = arr[j];
		i = j - 1;

		while (i>0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i = i - 1;
			arr[i + 1] = key;
		}
	}
	return 0;
}


