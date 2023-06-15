#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the head
 * @idx: index for insertion
 * @n: data for the node
 * Return: address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;

	if (!h)
		return (NULL);

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	tmp = *h;
	while (idx > 1)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
		idx--;
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
