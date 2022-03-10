#include "brick.h"

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

/**TODO: Definiáljunk egy függvényt, amellyel ellenőrzött módon be lehet állítani egyszerre a 3 él hosszát 
 * (például set_size néven)!**/
void set_size(Brick* brick, double x, double y, double z){
    brick->x = x;
    brick->y = y;
    brick->z = z;
}

/**TODO: Definiáljunk egy függvényt, amelyik kiszámítja a téglatest térfogatát (például calc_volume),**/
double calc_volume(const Brick* brick){
    double volume = brick->x * brick->y * brick->z;
    return volume;
}

//TODO:és egy másikat amelyik a felszínét (például calc_surface)!
double calc_surface(const Brick* brick){
    double surface = 2*(
      brick->x * brick->y 
    + brick->x * brick->z
    + brick->y * brick->z);
    return surface;
}
/** TODO: Definiáljunk egy függvényt, amelyik a téglalapot megvizsgálja, 
hogy van-e négyzet alakú lapja!**/
void check_cube(const Brick* brick){
if((brick->x == brick->y) ||(brick->x == brick->z)||(brick->y == brick->z)){
    printf("van negyzet alaku lapja");

}
else{
    printf("nincs negyzet alaku lapja");
}

}