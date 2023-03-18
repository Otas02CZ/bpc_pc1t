#include "VectorMath.h"
#include <math.h>
#include <stdio.h>

double vec_size(struct vector3d u) {
	return sqrt(
		u.x * u.x +
		u.y * u.y +
		u.z * u.z
	);
}

void tisk(struct vector3d u) {
	printf("w = (%lf, %lf, %lf)\n", u.x, u.y, u.z);
	printf("|w| = %lf\n", vec_size(u));
}

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
	struct vector3d result;
	switch (typ) {
	case soucet:
		result.x = u.x + v.x;
		result.y = u.y + v.y;
		result.z = u.z + v.z;
		break;
	case skalarniSoucin: // jakoze "skalarni soucin" :D
		result.x = u.x * v.x;
		result.y = u.y * v.y;
		result.z = u.z * v.z;
		break;
	case vektorovySoucin:
		result.x = (u.y * v.z) - (v.y * u.z);
		result.y = (u.z * v.x) - (v.z * u.x);
		result.z = (u.x * v.y) - (v.x * u.y);
		break;
	}
	return result;
}

int compare(struct vector3d u, struct vector3d v) {
	double uSize = vec_size(u);
	double vSize = vec_size(v);
	if (uSize == vSize)
		return 0;
	if (uSize > vSize)
		return 1;
	else
		return -1;

}

struct vector3d vecInput() {
	struct vector3d vector;
	printf("Zadejte 1.(x) slozku vektoru: ");
	scanf("%lf", &vector.x);
	printf("Zadejte 2.(y) slozku vektoru: ");
	scanf("%lf", &vector.y);
	printf("Zadejte 3.(z) slozku vektoru: ");
	scanf("%lf", &vector.z);
	return vector;
}