#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a linkint_t list
 * @head: pointer to head of linked list
 * @n: data to be added
 * Return: address of new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if empty, make new node head */
	if (!(*head))
		*head = new_node;

	/* traverse list and change next last node */
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
