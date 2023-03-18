// cv_8.cpp : Defines the entry point for the application.
//

#include <stdio.h>
#include <stdlib.h>
#include "koci.h"


void zpracuj_prunik(double zacatek1, double konec1, double zacatek2, double konec2) {
	double vys_int[2] = { 0,0 };
	int vysledek = prunik(zacatek1, konec1, zacatek2, konec2, &vys_int[0], &vys_int[1]);
	if (vysledek) {
		printf("prunik intervalu (%g, %g) a (%g, %g) je (%g, %g)\n", zacatek1, konec1, zacatek2, konec2, vys_int[0], vys_int[1]);
	}
	else {
		printf("intervaly (%g, %g) a (%g, %g) nemaji prunik\n", zacatek1, konec1, zacatek2, konec2);
	}
}

int main()
{
	double int1[2] = { 1.5, 2.8 }, int2[2] = { 1.6, 2.0 };
	double int3[2] = { 1.5, 2.8 }, int4[2] = { 3.6, 7.5 };
	double int5[2] = { 1.5, 4.8 }, int6[2] = { 2.6, 7.5 };
	double int7[2] = { 3.2, 1.0 }, int8[2] = { 2.0, 0.5 };
	double int9[2] = { 1, 2 }, int10[2] = {2, 0.5 };
	double int11[2] = { 4, 7 }, int12[2] = { 2, 6 };
	
	zpracuj_prunik(int1[0], int1[1], int2[0], int2[1]);
	zpracuj_prunik(int3[0], int3[1], int4[0], int4[1]);
	zpracuj_prunik(int5[0], int5[1], int6[0], int6[1]);
	zpracuj_prunik(int7[0], int7[1], int8[0], int8[1]);
	zpracuj_prunik(int9[0], int9[1], int10[0], int10[1]);
	zpracuj_prunik(int11[0], int11[1], int12[0], int12[1]);

	printf("zadejte prosim dva intervaly, u kterych spocitam prunik\n");
	printf("interval 1, hodnota 1: ");
	scanf("%lf", &int1[0]);
	printf("interval 1, hodnota 2: ");
	scanf("%lf", &int1[1]);
	printf("interval 2, hodnota 1: ");
	scanf("%lf", &int2[0]);
	printf("interval 2, hodnota 2: ");
	scanf("%lf", &int2[1]);
	zpracuj_prunik(int1[0], int1[1], int2[0], int2[1]);

	return 0;
}
