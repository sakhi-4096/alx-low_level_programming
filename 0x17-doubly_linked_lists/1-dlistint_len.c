#include "lists.h"

/**
 * dlistint_len - count and return number elements in list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
