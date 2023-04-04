#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stddef.h>

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

#endif /* LISTS.H */
