#include <stdlib.h>
#include <stdio.h>

int jePrestupny(int rok);
int jeLichy(int cislo);

int main()
{
	int roky[] = { 1000, 2000, 2002, 2012, 2022, 2200 };
	int rokyDelka = 6;
	printf("Prestupne roky:\n");
	for (int index = 0; index < rokyDelka; index++) {
		printf("Rok %d - %d\n", roky[index], jePrestupny(roky[index]));
	}

	int cisla[] = { 10, 3, 1, 17, 20, 6, -4, -3 };
	int cislaDelka = 8;
	printf("\nLicha cisla:\n");
	for (int index = 0; index < cislaDelka; index++) {
		printf("Cislo %d - %d\n", cisla[index], jeLichy(cisla[index]));
	}

	return 0;
}

int jePrestupny(int rok) {
	if ((rok % 4 == 0) && (rok % 100 != 0))
		return 1;
	if (rok % 400 == 0) {
		return 1;
	}
	return 0;
}

int jeLichy(int cislo) {
	return cislo % 2;
}