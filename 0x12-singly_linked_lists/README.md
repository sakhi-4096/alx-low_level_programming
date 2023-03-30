# C - Singly linked lists # 
* **Linked list** *- is a data structure consisting of a group of vertices (nodes) which together represent a sequence. Under the simplest form, each vertex is composed of a data and a reference (link) to the next vertex in the sequence. Linked List and its variations are used as underlying data structure to implement List, Stack, Queue, and Deque ADTs.*
* **Singly linked list** *- is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.*

------

### General Objectives ###
 * When and why using linked lists vs arrays
 * How to build and use linked lists

----
### More Info 
Use this data structure for this project
```c
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
```

------

0 - Write a function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf

1 - Write a function that returns the number of elements in a linked list_t list.
 * Prototype: size_t list_len(const list_t *h);

2 - Write a function that adds a new node at the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup

3 - Write a function that adds a new node at the end of a list_t list.
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup

4 - Write a function that frees a list_t list.
 * Prototype: void free_list(list_t *head);

------
### Author ###
* Sakhile Ndlazi
