#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sorting.h"

/// \brief Une methode
/**This part regroup the two different methods we use in order to sort a sequence of value.*/
void tri_insertion(double *T, int n, int *I) // n taille de la chaine
{
	for (int k = 0; k < n; k++)
		I[k] = k+1;
	int i, j;
	for (i = 1; i < n; i++)
	{
		int x = T[i];
		int y = I[i];
		for (j = i; j > 0 && T[j - 1] > x; j--)
		{
			T[j] = T[j - 1];
			I[j] = I[j - 1];
		}

		I[j] = y;
		T[j] = x;
	}
};

void quickSort(double *T, int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = T[(left + right) / 2];

	//partition
	while (i <= j)
	{
		while (T[i] < pivot)
			i++;
		while (T[j] > pivot)
			j--;
		if (i <= j)
		{
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
}
