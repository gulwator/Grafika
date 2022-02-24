#include "brick.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Brick brick;
	double surface;
	double volume;

    set_size(&brick,2,2,2);
    volume = calc_volume(&brick);
	
	
	printf("Brick volume: %lf\n", volume);
	
	return 0;
}
