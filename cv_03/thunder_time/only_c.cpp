// only_c.cpp : Defines the entry point for the application.
//

#include <stdlib.h>
#include <stdio.h>

double calculate_distance_from_lightning(double thunder_time) {
	const int speed_of_sound = 340;
	double distance = thunder_time * speed_of_sound;
	return distance;
}

int main()
{
	double thunder_time = 0;

	printf("Please give me the time duration between the lightning hit and the thunder: ");
	scanf("%lf", &thunder_time);

	printf("You should be %.2lf metres away from the storm. Be safe!!", calculate_distance_from_lightning(thunder_time));


	return 0;
}
