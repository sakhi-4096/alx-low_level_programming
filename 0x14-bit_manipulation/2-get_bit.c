#include "main.h"
#define CHECK_BIT(n, pos) (((n) >> (pos)) & 1)

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to be checked
 * @index: index value that has to be returned
 * Return: value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);

	bit = CHECK_BIT(n, index);

	return (bit);
}
