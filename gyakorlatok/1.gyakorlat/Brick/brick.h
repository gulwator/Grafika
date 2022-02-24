#ifndef BRICK_H
#define BRICK_H

/**
 * Data of a circle object in Descartes coordinate system
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

#endif // BRICK_H