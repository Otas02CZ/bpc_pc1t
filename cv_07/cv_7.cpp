// cv_7.cpp : Defines the entry point for the application.
//


#include <stdio.h>
#include "Body2d.h"

#define POCET_BODU 10

int main()
{
	int body[POCET_BODU][2] = {
		5, 10,
		-14, 2,
		45, 4,
		-9, 8,
		58, -3,
		47, 5,
		-18, -86,
		75, 7,
		-25, 51,
		17, 98 };

	int refX = 0;
	int refY = 0;

	printf("Zadejte prosim souradnice referencniho bodu [x;y]:\n");
	printf("x: ");
	scanf("%d", &refX);
	printf("y: ");
	scanf("%d", &refY);

	int indexNejblizsiho = indexNejblizsi(POCET_BODU, body, refX, refY);
	printf("Nejblizsi bod k [%d;%d] je bod [%d;%d]\n", refX, refY, body[indexNejblizsiho][0], body[indexNejblizsiho][1]);
	
	printf("Prumerna vzdalenost bodu v poli k bodu [%d;%d] je %g\n", refX, refY, prumernaVzdalenost(POCET_BODU, body, refX, refY));

	double vzdalenost = 0;
	printf("Zadejte prosim vzdalenost, vuci ktere mame porovnavat: ");
	scanf("%lf", &vzdalenost);
	blizkeBody(POCET_BODU, body, refX, refY, vzdalenost);
	
	return 0;
}
