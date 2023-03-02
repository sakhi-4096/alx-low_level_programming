#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number m bytes (chars)
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
