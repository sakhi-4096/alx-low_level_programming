#include "search_algos.h"

/**
 * binary_search - Perform binary search on a sorted array of integers.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int i, mid = left + (right - left) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1); /* Value not found */
}
