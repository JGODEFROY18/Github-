#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char s[100]; // On incrémente nos variables,il est donc possible de rentrer une chaine de caractére de 100 caractére.
	char p;
	char c;
	printf("Entrez une chaine de caractere :\n"); // On demande a l'utilisateur d'entrer la chaine de caractere.
	gets_s(s); // Le gets permet de lire la réponse. 
	printf("Entrez un caractére: \n"); // On demande a l'utilisateur d'entrer un seul caractere.
	scanf("%c", &c); // Comme c'est un une chaine de caractere et une variable char, pour lire la réponse on utilise le %c.
	p = strchr(s, c); // La fonction recherche strchr nous permet d'avoir la première occurrence du caractère passé en second paramètre dans la chaîne de caractères.

	printf("Le caractere %c se trouve a la position %d à partir de la droite", c, p - s + 1);

	return 0;
  
}
