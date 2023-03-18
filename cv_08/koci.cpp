
#include <stdio.h>

void prohod(double* num_1, double* num_2) {
	double pom = *num_1;
	*num_1 = *num_2;
	*num_2 = pom;
}

int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec) {
	
	if (zacatek1 > konec1)
		prohod(&zacatek1, &konec1);

	if (zacatek2 > konec2)
		prohod(&zacatek2, &konec2);

	if (zacatek1 > zacatek2) {
		prohod(&zacatek1, &zacatek2);
		prohod(&konec1, &konec2);
	}

	if (konec1 < zacatek2)
		return 0;

	if (zacatek2 > zacatek1)
		*vysl_zacatek = zacatek2;
	else
		*vysl_zacatek = zacatek1;
	if (konec2 < konec1)
		*vysl_konec = konec2;
	else
		*vysl_konec = konec1;
	return 1;
}