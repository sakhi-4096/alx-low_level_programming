#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
