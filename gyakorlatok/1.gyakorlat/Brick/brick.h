#ifndef BRICK_H
#define BRICK_H


/**TODO: Definiáljunk egy függvényt, amellyel ellenőrzött módon be lehet állítani egyszerre a 3 él hosszát 
 * (például set_size néven)!

TODO: Definiáljunk egy függvényt, amelyik kiszámítja a téglatest térfogatát (például calc_volume),
 és egy másikat amelyik a felszínét (például calc_surface)!

TODO: Definiáljunk egy függvényt, amelyik a téglalapot megvizsgálja, 
hogy van-e négyzet alakú lapja!
**/
/**
 * Data of a Brick object in Descartes coordinate system
 */
typedef struct Brick
{
	double x;
	double y;
	double z;
} Brick;

/**
 * Set the data of the brick
 */
void set_size(Brick* brick, double x, double y, double z);

/**
 * Calculate the volume of the Brick
 */
double calc_volume(const Brick* brick);

/**
 * Calculate the surface of the Brick
 */
double calc_surface(const Brick* brick);

void check_cube(const Brick* brick);

#endif // BRICK_H