#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sorting.h"
#include <vector>

using namespace std;

int main()
{
	double T[] = {4, 2, 6, 1, 9};
	cout << "avant le tri : " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << T[i] << endl;
	}

	tri_insertion(T, 5);
	//T = quickSort(T, 0, 4);

	cout << "apres le tri : " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << T[i] << endl;
	};

	return 0;
}