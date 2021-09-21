#define CRT_NO_WARNINGS
#include <stdlib>
#include <iostream>

int main()
{
	int poids = 0;

	printf("Entre le poids");
	scanf("%d, &poids");


	if (poids < 20) {

		printf("prix est de 3.00frs");
	}

	if (poids > 20 && poids <= 50) {

		printf("prix est de 3.95frs");
	}

	if (poids > 50) {

		printf("prix est de 5.90frs");
	}
}



