#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sorting.h"


double *tri_insertion(double T, int n)  // n taille
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int x = T[i];  // x est l'element selectionner
		for (j = i; j > 0 && T[j - 1] > x; j--)
			T[j] = T[j - 1];
		T[j] = x;

	}
	return T;
}

double *quickSort(double T[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = T[(left + right) / 2];

	//partition
	while (i <= j) {
		while (T[i] < pivot)
			i++;
		while (T[j] > pivot)
			j--;

		if (i <= j) {
			tmp = T[i];
			T[i] = T[j];
			T[j] = tmp;
			i++;
			j--;
		}
	};

	//recursion
	if (left < j)
		quickSort(T, left, j);
	if (i < right)
		quickSort(T, i, right);
	
	return T;
}
