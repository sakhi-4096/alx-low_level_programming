#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key from the hash table
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	/* Check if the hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	/* Key couldn't be found */
	return (NULL);
}
