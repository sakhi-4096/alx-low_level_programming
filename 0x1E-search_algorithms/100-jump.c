#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Find a value in a sorted array using jump search.
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size); /* Calculate the jump step size */
	size_t left = 0; /* Initialize the left bound of the range */
	size_t right = step; /* Initialize the right bound of the range */

	if (array == NULL)
		return (-1);

	/* Perform the jump search */
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	/* Linear search within the range */
	while (left < size && left <= right)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}

	return (-1); /* Value not found */
}
