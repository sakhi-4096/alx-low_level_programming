#include "search_algos.h"

/**
 * exponential_search - Perform Exponential search on a sorted array of integers.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
  if (array == NULL)
    return (-1);

  if (array[0] == value)
    return (0);

  int i = 1;
  while (i < size && array[i] <= value)
  {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    i *= 2;
  }

  int low = i / 2;
  int high = (i < size) ? i : size - 1;

  printf("Value found between indexes [%d] and [%d]\n", low, high);

  return (binary_search(array, low, high, value));
}