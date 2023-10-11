#include "search_algos.h"

/**
 * interpolation_search - Perform Interpolation search on a sorted array of integers.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
  int low = 0;
  int high = size - 1;

  if (array == NULL)
    return (-1);

  while (low <= high && value >= array[low] && value <= array[high])
  {
    if (low == high)
    {
      if (array[low] == value)
        return (low);
      return (-1);
    }

    size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

    printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

    if (array[pos] == value)
      return (pos);

    if (array[pos] < value)
      low = pos + 1;
    else
      high = pos - 1;
  }

  return (-1);
}