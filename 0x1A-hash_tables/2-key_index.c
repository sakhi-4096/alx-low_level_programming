#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the djb2 algorithm */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulus with the array size */
	return (hash_value % size);
}
