#include <stdio.h>
#include <string.h>
#include <tchar.h>
#include <conio.h>
#include <string.h>

#define Max 200 // On definie comme maximum 200

void chaine(char taille[Max]) 
{
	int a = 0; // On initialise la vrariable a à 0(int car c'est un entier)
	char c; // On crée une varabile de chaine de caractere que l'on appelle c.
	c = getchar(); // On utilise getchar() qui nous permet de capter la valeur du caractère lu à la position.
	while ((c != '\n') && (a < Max)) // On fais donc une boucle tant que qui dit que tant que c est contraire (n'est pas encore au caratere) \n et que la valeur de la variable a est inferieur au max definie.
	{


		taille[a++] = c; // On incremente la valeur de +1 puis on la transmet dans c.

		c = getchar();
	}
	taille[a] = '\0'; // Pour finir quand taille[a] est egal ou arrive au caractere \0 la boucle s'arréte.
}

int main()
{
	char taille2[100][2]; // On incremente une nouvelle variable qui correspond a une chaine de caractere que l'on nomme taille2
	char lettres; 
	int nombre;
	char taille[Max];
	int x = 0, a, j, k, repete = 0; // On initialise la variable x a 0 (entier)
	printf("entrez une chaine de caracteres :\n");
	chaine(taille);
	for (a = 0; a < strlen(taille); a++) // On fais une boucle for qui dit que a est egal a 0 
	{
		for (j = 0; j < strlen(taille); j++) // On increment j a 0 et on utlise strlen qui permet de calculer la longueur, exprimée en nombre de caractères, de la chaîne de caractères.
		{
			if (taille[a] == taille[j]) // Si la taille de a est egal a la taille de j on incremente de x + 1
				x++;
		}
		printf("%d fois la lettre %c\n", x, taille[a]);
		x = 0;
	}
	getchar();
}
