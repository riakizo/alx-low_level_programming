#include "main.h"

/**
 * flip_bits - this one counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: this the number.
 * @m: this is the number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fb = n ^ m, bits = 0;

	while (fb > 0)
	{
		bits += (fb & 1);
		fb >>= 1;
	}

	return (bits);
}
