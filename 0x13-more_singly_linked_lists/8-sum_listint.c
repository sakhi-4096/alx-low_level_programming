#include "lists.h"

/**
 * sum_listint - return sum of all data (n) of listint_t list
 * @head: pointer to head of list
 * Return: sum of list, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
