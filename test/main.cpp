#include <stdio.h>
#include <iostream>
#include <fstream>
#include "../library/sorting.h"
#include <vector>

using namespace std;

int main()
{
	//Initialisation by the user
	int n;
	cout << "Size of the Array:" << endl;
	cin >> n;
	cout << "Fill the Array:" << endl;
	double T[n];
	int I[n];
	for (int i = 0; i < n; i++)
	{
		cin >> T[i];
	};

	//Display
	cout << "Before sorting : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << endl;
	}

	//Fonction choice by the user
	int m;
	double duration;
	cout << "Which function do you want to use? " << endl;
	cout << "tri insertion = 0" << endl;
	cout << "Quicksort = 1" << endl;
	cin >> m;
	do
	{
		if (m == 0)
		{
			auto start = clock();
			tri_insertion(T, n, I);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			break;
		}
		else if (m == 1)
		{
			auto start = clock();
			quickSort(T, 0, n - 1, I);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			break;
		}
		else
		{
			cout << "Wrong imput" << endl;
			cout << "Which function do you want to use? " << endl;
			cout << "tri insertion = 0" << endl;
			cout << "Quicksort = 1" << endl;
			cin >> m;
		}
	} while (true);

	//Displays
	cout << "After the sorting : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	};
	cout << endl;

	cout << "Initial order : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << I[i] << " ";
	};
	cout << endl;

	cout << "Time of the fonction (s) : " << begin - end + 1;

	return 0;
}