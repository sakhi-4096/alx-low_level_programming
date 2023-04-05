#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - print elements of linked list
 * @h: pointer to head link
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - get number of elements in linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - add node at beginning of listint_t list
 * @head: pointer to head of list
 * @n: number to be added
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - add new node at the end of a linkint_t list
 * @head: pointer to head of linked list
 * @n: data to be added
 * Return: address of new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - free a listint_t list
 * @head: pointer to the head of list
 * Return: void
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - free a listint_t list
 * @head: linked list
 * Return: void
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - delete head node and return the head node data
 * @head: linked list
 * Return: head node's data
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - get the nth node of a linkint_t list
 * @head: pointer to head
 * @index: index of node to be returned
 * Return: node at index, NULL if not there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - return sum of all data (n) of listint_t list
 * @head: pointer to head of list
 * Return: sum of list, 0 if empty
 */
int sum_listint(listint_t *head);

#endif /* LISTS.H */
