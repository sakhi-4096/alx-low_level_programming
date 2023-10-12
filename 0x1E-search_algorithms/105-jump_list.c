#include "search_algos.h"

/**
 * jump_list - Perform Jump search on a sorted linked list of integers.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = (size_t)sqrt(size);
	size_t prev = 0;
	listint_t *current = list;

	if (list == NULL)
		return (NULL);

	while (current && current->index < step)
	{
		printf("Value checked at index [%lu] = [%d]\n", (unsigned long)current->index, current->n);
		prev = current->index;
		current = current->next;
	}

	printf("Value checked at index [%lu] = [%d]\n", (unsigned long)current->index, current->n);

	printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)prev, (unsigned long)current->index);

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", (unsigned long)current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
