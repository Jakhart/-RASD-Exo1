#include <stdio.h>
#include <iostream>
#include <fstream>

/**This method sort a Array /a T of /n caracter
 * /param[in] T the array to sort
 * /param[in] n the size of the array
 * /param[in] I an empty array that will give the initial position of the terms in the array at the end of the fonction
 * */
void tri_insertion(double *T, int n, int *I);
void quickSort(double *T, int left, int right, int *I);
void quick(double *T, int left, int right, int *I);