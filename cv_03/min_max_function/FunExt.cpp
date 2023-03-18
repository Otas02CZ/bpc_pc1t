// FunExt.cpp : Defines the entry point for the application.
//

#include "FunExt.h"

using namespace std;

void min() {
    double minY = DBL_MAX;
    int minX = INT_MAX;
    for (int x = 1; x <= 10; ++x)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        if (y < minY)
        {
            minY = y;
            minX = x;
        }
    }
    printf("Minimum value: %lf at x=%d\n", minY, minX);
}

void max() {
    double maxY = 0;
    int maxX = 0;

    for (int x = 10; x <= 20; ++x)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        if (y > maxY)
        {
            maxY = y;
            maxX = x;
        }
    }
    printf("Maximum value: %lf at x=%d\n", maxY, maxX);
}


int main()
{
    min();
    max();
    return 0;
}


