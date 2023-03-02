#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: collection of integers
 * @n: number of integers in collection
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;
	int end = n - 1;

	while (i < end)
	{
		tmp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = tmp;
		i++;
		end--;
	}
}
