#include "search_algos.h"

/**
 * _binary_search - Perform binary search on a sorted array of integers.
 * @array: Pointer to the first element of the sorted array to search in.
 * @left: The starting index of the array to search.
 * @right: The ending index of the array to search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - Perform Exponential search onsorted array of integers
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t interval = 1;
	size_t left, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		while (interval < size && array[interval] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", interval, array[interval]);
			interval *= 2;
		}
	}

	left = interval / 2;
	right = (interval < size) ? interval : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (_binary_search(array, left, right, value));
}
