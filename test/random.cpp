#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include<time.h>
#include "../library/sorting.h"

using namespace std;

int main()
{	
    int c=1000;
    int d=100;
    srand(time(NULL));
    int n = rand()%c;
    double T[n];
    for (int i=0; i<n; i++) T[i] = rand()%d;
	int I[n];
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