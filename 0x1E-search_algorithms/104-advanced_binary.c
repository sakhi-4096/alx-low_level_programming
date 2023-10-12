#include "search_algos.h"

/**
 * advanced_binary_recursive - Perform advanced binary search recursively.
 * @array: Pointer to the first element of the sorted array to search in.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i, mid;

	if (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			if (array[mid - 1] == value)
				return (advanced_binary_recursive(array, low, mid, value));
			return (mid);
		}
		if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		return (advanced_binary_recursive(array, low, mid - 1, value));
	}

	return (-1); /* Value not found */
}

/**
 * advanced_binary - Perform advanced binary search on sorted array of integers
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
