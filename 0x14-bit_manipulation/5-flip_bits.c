#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one num to another
 *
 * @n: initial int
 * @m: int to flip to
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;

	bits = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			bits++;
		m = m >> 1;
		n = n >> 1;
	}

	return (bits);

}
