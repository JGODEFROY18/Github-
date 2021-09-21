// TP2 Exo2 C.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define CRT_NO_WARNINGS
#include <iostream>
#include <stio.h>

int main()
{
	int a, b, c;

	printf("Donnez trois entiers:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		if (b >= c)printf("%d %d %d\n", c, b, a, );
		else printf("%d %d %d\n", b, c, , a);
	}
	if (b >= a && b >= c)
	{
		if (a >= c)printf("%d %d %d\n", c, a, b, );
		else printf("%d %d %d\n", a, c, b);
	}
	if (c >= a && c >= b)
	{
		if (a >= b)printf("%d %d %d\n", b, a, c);
		else printf("%d %d %d\n", a, b, c);
	}
	system("pause");
}	
