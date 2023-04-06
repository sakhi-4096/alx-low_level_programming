#include "lists.h"

/**
 * reverse_listint - reverse a listint linked list
 * @head: linked list
 * Return: pointer to first node of reverserd list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next; /* next node to move to */
		(*head)->next = prev; /* link current node to prev node */
		prev = (*head); /* prev node to current node */
		(*head) = next; /* current node to next node */
	}
	(*head) = prev; /* unlink last element from NULL */

	return (*head);
}
