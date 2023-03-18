
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE* vstup, * vystup;
	char vstup_cesta[40] = "D:/vstup.txt", vystup_cesta[40]	= "D:/vysledky.txt";
	vstup = fopen(vstup_cesta, "r");
	if (vstup == NULL) {
		printf("Nelze otevrit vstupni soubor.\n");
		return 0;}
	vystup = fopen(vystup_cesta, "w");
	if (vystup == NULL) {
		fclose(vstup);
		printf("Nelze otevrit vystupni soubor.\n");
		return 0;}
	char aktualni, predchozi = EOF;
	int n_pismen = 0, n_cis = 0, n_vet = 0, n_slov = 0;
	while ((aktualni = fgetc(vstup)) != EOF) {
		if (isalpha(aktualni)) {
			n_pismen++;
		}
		else {
			if (isdigit(aktualni)) {
				n_cis++;
			}}
		if ( ( aktualni == ' ' || aktualni == ',' || aktualni == '.' || aktualni == '!' || aktualni == '?' || aktualni == '\n' ) && isalpha(predchozi)) {
			n_slov++;
		}
		if ( ( aktualni == '.' || aktualni == '?' || aktualni == '!' ) && (isalpha(predchozi) || isdigit(predchozi))) {
			n_vet++;
		}
		predchozi = aktualni;
	}
	if (isalpha(predchozi)) {
		n_slov++;
	}
	printf("Pocet pismen je %d\nPocet cislic je %d\nPocet slov je %d\nPocet vet je %d\n", n_pismen, n_cis, n_slov, n_vet);
	if (fprintf(vystup, "%d\n%d\n%d\n%d", n_pismen, n_cis, n_slov, n_vet) == -1) {
		printf("Doslo k chybe zapisu do souboru.");
	}
	fclose(vstup);
	fclose(vystup);
	return 0;
}
