#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(arr + 1) = 0;

	return ((void *) arr);
}
