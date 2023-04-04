#include "lists.h"

/**
 * pop_listint - delete head node and return the head node data
 * @head: linked list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;

	if (!(*head))
		return (0);
	n = (*head)->n;

	return (n);
}
