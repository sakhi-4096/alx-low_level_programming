#include "main.h"
#define CLEAR_BIT(n, pos) ((n) &= ~(1 << (pos)))

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to bits
 * @index: index value to be changed
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);

	num = CLEAR_BIT(*n, index);

	return (num);
}
