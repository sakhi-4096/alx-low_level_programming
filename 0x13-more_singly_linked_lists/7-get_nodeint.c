#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linkint_t list
 * @head: pointer to head
 * @index: index of node to be returned
 * Return: node at index, NULL if not there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head && count <= index)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
