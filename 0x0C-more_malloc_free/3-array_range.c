#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers with a range
 * @min: miinimum integer
 * @max: maximum integer
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, j, elem;
	int *arr;

	if (min > max)
		return (NULL);
	elem = (max - min) + 1;

	arr = malloc(sizeof(int) * elem);
	if (arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max && j < elem; i++, j++)
		*(arr + j) = i;

	return (arr);
}
