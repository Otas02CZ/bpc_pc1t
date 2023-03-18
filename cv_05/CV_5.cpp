#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void soucet(double a[2], double b[2], double c[2]) {
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
}

void rozdil(double a[2], double b[2], double c[2]) {
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
}

void soucin(double a[2], double b[2], double c[2]) {
	c[0] = (a[0] * b[0]) - (a[1] * b[1]);
	c[1] = (a[0] * b[1]) + (b[0] * a[1]);
}

void tisk(double a[2]) {
	if (a[1] < 0)
		printf("%g - %gi\n", a[0], -1*a[1]);
	else
		printf("%g + %gi\n", a[0], a[1]);
}

void tisk2(double a[2]) {
	double abs = sqrt((pow(a[0], 2) + pow(a[1], 2)));
	double phi = atan2(a[1], a[0]);
	printf("%.2lfe^i%.2lf\n", abs, phi);
}


int main()
{
	double a[2], b[2], c[2];
	char operace;
	printf("Zadejte komplexni cislo a\n");
	printf("Realna slozka: ");
	scanf("%lf", &a[0]);
	printf("Imaginarni slozka: ");
	scanf("%lf", &a[1]);

	printf("Zadejte komplexni cislo b\n");
	printf("Realna slozka: ");
	scanf("%lf", &b[0]);
	printf("Imaginarni slozka: ");
	scanf("%lf", &b[1]);

	printf("Zadejte operaci (+, -, *): ");
	scanf(" %c", &operace);

	printf("\nZadana cisla a,b:\n");
	tisk(a);
	tisk(b);

	switch (operace) {
	case '+': 
		printf("\nSoucet:\n");
		soucet(a, b, c);
		break;
	case '-':
		printf("\nRozdil:\n");
		rozdil(a, b, c);
		break;
	case '*':
		printf("\nSoucin:\n");
		soucin(a, b, c);
		break;
	}
	tisk(c);
	tisk2(c);
	return 0;
}
