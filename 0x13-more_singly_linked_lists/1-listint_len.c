#include "lists.h"

/**
 * listint_len - get number of elements in linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
