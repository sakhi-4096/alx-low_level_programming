#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		exit(EXIT_SUCCESS);

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
