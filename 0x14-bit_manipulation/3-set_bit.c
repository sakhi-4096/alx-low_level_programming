#include "main.h"
#define SET_BIT(n, pos) ((n) |= (1 << (pos)))

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to bits
 * @index: index value to be changed
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);

	num = SET_BIT(*n, index);

	return (1);
}
