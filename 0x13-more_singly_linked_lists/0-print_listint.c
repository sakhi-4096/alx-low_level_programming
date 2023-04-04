#include "lists.h"

/**
 * print_listint - print elements of linked list
 * @h: pointer to head link
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
