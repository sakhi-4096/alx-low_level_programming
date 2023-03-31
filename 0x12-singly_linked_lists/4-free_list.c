#include "lists.h"

/**
 * free_list - free memory allocated for linked list
 * @head: pointer to head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
