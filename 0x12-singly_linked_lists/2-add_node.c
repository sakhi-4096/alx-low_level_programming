#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to head of linked list
 * @str: name being added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	while (*(str + len))
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
