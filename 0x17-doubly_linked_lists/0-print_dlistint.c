#include "lists.h"

/**
 * print_dlistint - print all elements of list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
