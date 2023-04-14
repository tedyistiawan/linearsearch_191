#include <iostream>
using namespace std;


int arr[20]; // array to be searched
int n; // number of elements in the array
int i; // index of array in elements


void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}

	// Accept array elements
	cout << "\n---------------------\n";
	cout << "enter array elements \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[1];
	}
}



void linearsearch()
{
	char ch;
	int comparison; // number of comparisons

	do
	{
		// accept the number to be searched 
		cout << "\nEnter the element you want to search: "; // langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)								// langkah 2,3 dan 4
		{
			comparison++;
			if (arr[i] == item)								// langkah 5 a found
			{
				cout << "\n" << "found at position " << (i + i) << endl;
				break;
			}
		}

		if (i == n)											// langkah 5 b not found 
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	linearsearch();
}


