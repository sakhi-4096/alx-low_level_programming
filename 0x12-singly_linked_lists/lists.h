#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - print all elements of a list
 * @h: list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - return number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h);

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to head of linked list
 * @str: name being added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - add new node at the end of linked list
 * @head: pointer to head of linked list
 * @str: string being added to new node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS.H */
