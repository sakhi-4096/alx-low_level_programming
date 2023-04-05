#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of listint_t list
 * @head: linked list
 * @index: index for deletion
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *prev, *current = *head;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i != (index - 1) && current != NULL)
		current = current->next, i++;

	if (i != (index - 1) || current->next != NULL)
		return (-1);

	prev = current->next;
	current->next = (current->next)->next;
	free(prev);

	return (1);
}
