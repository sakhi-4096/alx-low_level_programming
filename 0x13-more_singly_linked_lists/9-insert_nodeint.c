#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: linked list head
 * @idx: index for insertion
 * @n: data being insterted
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *new_node, *temp = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}

	while (temp && count <= idx)
	{
		if (count == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}
		else
			return (NULL);
		temp = temp->next;
		count++;
	}
	return (new_node);
}
