#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: pointer to pointer to the head of list
 * @n: node data
 * Return: address of new node, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	new_node->next = NULL;
	new_node->prev = last_node;
	last_node->next = new_node;

	return (new_node);
}
