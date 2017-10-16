#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sorting.h"
#include <vector>

using namespace std;

int main()
{	
	int n;	
	cout << "size of the Array:" << endl;
	cin >> n;
	cout << "Fill the Array:" << endl;
	double T[n];
	for (int i = 0; i < n; i++)
	{
		cin >> T[i];
	};
	//double T[] = {4, 2, 6, 1, 9};
	cout << "avant le tri : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << endl;
	}
	int I[n];
	tri_insertion(T, n, I);
	//T = quickSort(T, 0, 4);

	cout << "apres le tri : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << endl;
	};

	cout << "ordre initial : " << endl;	
	for (int i = 0; i < n; i++)
	{
		cout << I[i] << endl;
	};

	return 0;
}