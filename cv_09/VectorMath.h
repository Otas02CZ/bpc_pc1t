#pragma once

enum typOperace { soucet = 1, skalarniSoucin, vektorovySoucin };

struct vector3d {
	double x;
	double y;
	double z;
};

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);
void tisk(struct vector3d u);
double vec_size(struct vector3d u);
int compare(struct vector3d u, struct vector3d v);
struct vector3d vecInput();