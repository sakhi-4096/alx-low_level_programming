#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at given index for list
 * @head: pointer to head
 * @index: position for deletion
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;
	size_t count;

	if (head == NULL || *head == NULL)
		return (-1);

	del = *head;
	if (index == 0)
	{
		*head = del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}

	count = 0;
	while (count < index && del != NULL)
	{
		del = del->next;
		count++;
	}

	if (del == NULL)
		return (-1);

	if (del->prev != NULL)
		del->prev->next = del->next;

	if (del->next != NULL)
		del->next->prev = del->prev;

	free(del);
	return (1);
}
