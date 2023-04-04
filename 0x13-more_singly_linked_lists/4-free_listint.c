#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
