#include "main.h"

/**
 * _abs - function that computes absolute alue
 * of integer
 * @ab: integer
 * Return: 0 success
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
