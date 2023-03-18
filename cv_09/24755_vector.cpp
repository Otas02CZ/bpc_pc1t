// 24755_vector.cpp : Defines the entry point for the application.
//

#include <stdio.h>
#include "VectorMath.h"

int main()
{
	struct vector3d vec1, vec2;

	printf("Zadejte data pro 1. vektor\n");
	vec1 = vecInput();
	printf("Zadejte data pro 2. vektor\n");
	vec2 = vecInput();

	tisk(vec1);
	tisk(vec2);

	printf("Zadejte operaci (1-soucet, 2-skal_soucin, 3-vek_soucin): ");
	int op;
	scanf("%d", &op);
	tisk(operace(vec1, vec2, (typOperace)op));
	
	printf("Vektory u a v jsou vzajemne: %d", compare(vec1, vec2));

	return 0;
}
