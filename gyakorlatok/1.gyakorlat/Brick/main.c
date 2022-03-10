#include "brick.h"

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	Brick brick;
	double surface;
	double volume;

    set_size(&brick,1,2,3);
    volume = calc_volume(&brick);
	surface = calc_surface(&brick);
	
	printf("Brick volume: %lf\n", volume);
	printf("Brick surface: %lf\n", surface);
	check_cube(&brick);
	return 0;
}
