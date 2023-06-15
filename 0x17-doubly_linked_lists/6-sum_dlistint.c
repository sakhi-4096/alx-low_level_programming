#include "lists.h"

/**
 * sum_dlistint - return the sum of data of a linked list
 * @head: pointer to the head
 * @Return: sum of data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
