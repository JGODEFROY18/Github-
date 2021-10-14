int main()
{
	char str[100]; // On incremente une chaine de caractere de 100 caracter a l'aide de la variable char.
	int i; // On crée une variable i que l'on initiera a 0 par la suite.

	printf("Entrez une chaine de caractere en majuscule : \n"); // On demande a l'utilisateur de rentrer une chaine de caractere en majuscule. 
	gets_s(str); // 
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	printf("La chaine en miniscule= %s", str);
	return 0;
}
