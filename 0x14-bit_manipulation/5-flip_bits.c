#include "main.h"
#define FLIP_BIT(n, m, k) ((n ^ m) >> (k))

/**
 * flip_bits - number of bits needed to flip to get from one number to another
 * @n: number one
 * @m: nubmer two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit_diff = 0;

	for (i = 0; i < 32; i++)
	{
		if (((FLIP_BIT(n, m, i)) & 1) == 1)
			bit_diff++;
	}
	return (bit_diff);
}
