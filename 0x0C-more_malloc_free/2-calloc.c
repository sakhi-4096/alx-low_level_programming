#include "main.h"
#include <stdlib.h>

/**
 * _memset - fill memory with constant byte
 * @s: memory area
 * @b: char tto copy
 * @n: number of times b is copied
 * Return: pointer to s
 */

char *_memset(char *s, char b, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}
