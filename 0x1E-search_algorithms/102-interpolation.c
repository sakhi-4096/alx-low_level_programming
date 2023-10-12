#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of
 * integers using the Interpolation search algorithm.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the number or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double factor;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		factor = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + factor);
		printf("Value checked array[%d] = [%d]\n", (int)position, array[position]);

		if (position >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)position);
			break;
		}
		if (array[position] == value)
			return ((int)position);
		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}

	return (-1);
}
