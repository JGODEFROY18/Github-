// ConsoleApplication8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <tchar.h>

int main()
{
	int t[3][4];
	int i = 0;
	int j = 0;
	int s = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Entrer une valeur : ");
			scanf("%d", &t[i][j]);
			s = s + t[i][j];
		}
	}

	printf("/n Le tableau en 2D est : /n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", t[i][j]);
		}
		printf("/n");
	}


	printf("La somme des valeurs de t est de %d", s);

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
