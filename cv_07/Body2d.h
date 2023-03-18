#pragma once

#include <math.h>

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY);
double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY);
void blizkeBody(int velikost, int(*pole)[2], int referencniX, int referencniY, double vzdalenost);

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) {

	int indexNejblizsiho = 0;
	double vzdalenostNejblizsiho = sqrt(pow(poleBodu[0][0] - referencniX, 2) + pow(poleBodu[0][1] - referencniY, 2));

	for (int i = 1; i < velikost; i++) {
		double vzdalenost = sqrt(pow(poleBodu[i][0] - referencniX, 2) + pow(poleBodu[i][1] - referencniY, 2));
		if (vzdalenost < vzdalenostNejblizsiho) {
			vzdalenostNejblizsiho = vzdalenost;
			indexNejblizsiho = i;
		}
	}

	return indexNejblizsiho;
}

double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) {

	double sumVzdalenosti = 0;

	for (int i = 1; i < velikost; i++) {
		sumVzdalenosti += sqrt(pow(poleBodu[i][0] - referencniX, 2) + pow(poleBodu[i][1] - referencniY, 2));
	}

	return sumVzdalenosti / velikost;
}

void blizkeBody(int velikost, int(*poleBodu)[2], int referencniX, int referencniY, double vzdalenost) {
	
	for (int i = 1; i < velikost; i++) {
		double vzdalenostBodu = sqrt(pow(poleBodu[i][0] - referencniX, 2) + pow(poleBodu[i][1] - referencniY, 2));
		if (vzdalenostBodu < vzdalenost) {
			printf("Bod [%d;%d] ma vzdalenost od bodu [%d;%d] rovnu %g, tedy mensi nez %g\n", poleBodu[i][0], poleBodu[i][1], referencniX, referencniY, vzdalenostBodu, vzdalenost);
		}
	}
}