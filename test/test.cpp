#include <stdio.h>
#include <iostream>
#include <fstream>
#include "../library/sorting.h"
#include <vector>

using namespace std;

int main()
{	
	int n = 5;
    double T[] = {4, 2, 6, 1, 9};
	int I[5];
	cout << "avant le tri : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
    }
    cout << endl;

	int m;
	cout << "Which function do you want to use? " << endl;
	cout << "tri insertion = 0" << endl;
	cout << "Quicksort = 1" << endl;
	cin >> m;
    
	if (m ==0)	tri_insertion(T, n, I);
	else if (m==1) quickSort(T, 0, n-1, I);
	else cout << "wrong imput" << endl;

	cout << "apres le tri : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << T[i] << " ";
	};
    cout << endl;
	cout << "ordre initial : " << endl;	
	for (int i = 0; i < n; i++)
	{
		cout << I[i] << " ";
	};
	cout << endl;

	return 0;
}