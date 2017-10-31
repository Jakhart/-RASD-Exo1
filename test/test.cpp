#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include "../library/sorting.h"

using namespace std;

int main()
{
	//Initialisation
	int n = 5;
<<<<<<< HEAD
<<<<<<< HEAD
    double T[] = {4, 2, 6, 100000000000000, 9};
=======
	double T[] = {4, 2, 6, 1, 9};
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2
=======
	double T[] = {4, 2, 6, 1, 9};
>>>>>>> 1a21ebb23621f882e321f83cf07f502bda1d45a2
	int I[5];
	double duration;

	//Display
	cout << "avant le tri : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
	cout << endl;

	//Fonction choice by the user
	int m;
	cout << "Which function do you want to use? " << endl;
	cout << "tri insertion = 0" << endl;
	cout << "Quicksort = 1" << endl;
	cin >> m;
	do
	{
		if (m == 0)
		{
			start = clock();
			tri_insertion(T, n, I);
			duration = (clock() - start) / (double) CLOCKS_PER_SEC;
			break;
		}
		else if (m == 1)
		{
			start = clock();
			quickSort(T, 0, n - 1, I);
			duration = (clock() - start) / (double) CLOCKS_PER_SEC;
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

	cout << "Time of the fonction (s) : " << duration;

	return 0;
}