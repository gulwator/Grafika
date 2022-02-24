#include "brick.h"

#include <math.h>

void set_size(Brick* brick, double x, double y, double z){
    // printf("kérem adja meg a téglatest három oldalának hosszát (x,y,z)");
    // scanf("%d %d %d", &  )
    brick->x = x;
    brick->y = y;
    brick->z = z;
}

double calc_volume(const Brick* brick){
    double volume = brick->x * brick->y * brick->z;
    return volume;
}
