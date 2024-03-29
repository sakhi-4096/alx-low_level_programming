#include "lists.h"

/**
 * add_node_end - add new node at the end of linked list
 * @head: pointer to head of linked list
 * @str: string being added to new node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t len = 0;

	if (!str)
		return (NULL);
	if (!(strdup(str)))
		return (NULL);

	while (*(str + len))
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
