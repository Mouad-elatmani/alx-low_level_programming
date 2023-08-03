#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: number to be flipped
 * @m: number to filp n to
 * Return: no. of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int bit = 0;

	i = n ^ m;
	while (i > 0)
	{
		if (i & 1)
			bit++;
		i >>= 1;
	}
	return (bit);
}
