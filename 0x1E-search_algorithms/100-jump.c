#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Perform Jump search on a sorted array of integers.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
  int step = (int)sqrt(size);
  int prev = 0;

  if (array == NULL)
    return (-1);

  while (array[step] < value && step < size)
  {
    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    prev = step;
    step += (int)sqrt(size);
  }

  printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

  while (array[prev] < value)
  {
    prev++;

    if (prev == (step > size ? size : step))
    {
      return (-1);
    }

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
  }

  if (array[prev] == value)
    return (prev);

  return (-1);
}