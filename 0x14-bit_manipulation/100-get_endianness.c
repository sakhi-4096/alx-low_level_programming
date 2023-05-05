#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 0x00000001; /* store number */

	/* check number stored at [0] and return */
	return ((int) ((*(char *)&n)+48));
}
