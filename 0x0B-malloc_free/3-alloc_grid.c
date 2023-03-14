#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of integers
 * @width: horizontal length
 * @height: vertical length
 * Return: pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(int));
		if (*(arr + i) == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
			*(*(arr + i) + j) = 0;
	}

	return (arr);
}
