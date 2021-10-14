int main()
{
	char str[100]; // On incremente une chaine de caractere de 100 caracter a l'aide de la variable char.
	int i; // On crée une variable i que l'on initiera a 0 par la suite.

	printf("Entrez une chaine de caractere en majuscule : \n"); // On demande a l'utilisateur de rentrer une chaine de caractere en majuscule. 
	gets_s(str); //Le gets nous permet de lire les caractere entrez par l'utilisateur.
	for (i = 0; str[i] != '\0'; i++) { // On utilise donc par la suite suite une boucle For(pour). Qui dit que tant que i = 0 que str[i] n'est pas encore arriver au caractere \0 donc la fin de la chaine de caractere, on incremente de i + 1.
		
		if (str[i] >= 'A' && str[i] <= 'Z') { // Ensuite on dit que : Si str[i] est surperieur ou égal a A (Table ASCI) et que str[i] est inferieur a Z (table ASCI)
			str[i] = str[i] + 32; 
		}
	}
	printf("La chaine en miniscule= %s", str); // %s est egal a la variable char et donc %s  a la chaine de caractere.
	return 0;
}
