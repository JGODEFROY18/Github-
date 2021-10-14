#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char s[100];
	char *p;
	char c;
	printf("Entrez une chaine de caractere :\n");
	gets_s(s);
	printf("Entrez un caractére: \n");
	scanf("%c", &c);
	p = strchr(s, c);

	printf("Le caractere %c se trouve a la position %d à partir de la droite", c, p - s + 1);

	return 0;
  
}