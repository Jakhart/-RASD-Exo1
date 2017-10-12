#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sorting.h"
#include <vector>

using namespace std;



int main()
{
		
		//ifstream fichier("test.txt", ios::in);  // on ouvre
		 
		//if (fichier)
		//{
		//	int k; // notre variable où sera stocké le caractère
			//fichier.get(k);  // on lit un caractère et on le stocke dans caractere
			//cout << k;  // on l'affiche


	
		
			//int userSize;
			//cout << "put the size of the imput sequence : " << endl;
			//cin >> userSize;
					
			double T[5] = { 4, 2, 6, 1, 9 };
			cout << "avant le tri : " << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << T[i]<< endl;
			}

			//tri_insertion(T, 5);

			//cout << "apres le tri : " << endl;
			//for (int i = 0; i < 5; i++)
			//{
			//	cout << T[i] << endl;
			//}

			quickSort(T, 0, 4);
			cout << "apres le tri rapide : " << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << T[i] << endl;
			}

			//fichier.close();
		//}
		// else
		//	cerr << "Impossible d'ouvrir le fichier !" << endl;

		
			return 0;
}