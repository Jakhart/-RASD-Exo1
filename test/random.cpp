#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "../library/sorting.h"

using namespace std;

int main()
{
	//Initialisation
	int c = 1000; //The size of the Array is a random number between 0 and C+1
	int d = 100;  //The numbers in the Array are inbetween 0 and d
	srand(time(NULL));
	int n;
	int m;

	int I[n];
	double duration;
	double start;
	

	//User choice
	cout << "Choose :\nRandom array size : 0\nChoose array size : 1" << endl;
	cin >> m;
	do
	{
		if (m == 0)
		{
			n = rand() % c + 1;
			break;
		}
		else if (m == 1)
		{
			cout << "Choose the size of the array : " << endl;
			cin >> n;
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
	
	double T[n];
	for (int i = 0; i < n; i++)
		T[i] = rand() % d;

	//Display
	cout << "Before sorting : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	}
	cout << endl;

	//Fonction choice by the user
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
			duration = (clock() - start) / (double) CLOCKS_PER_SEC;
			break;
		}
		else if (m == 1)
		{
			auto start = clock();
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