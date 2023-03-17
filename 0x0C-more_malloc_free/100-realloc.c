#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copy block of data from source address to destination
 * @dest: destination address for copy
 * @src: source address for copy
 * @size: size of copied block bytes
 * Return: void
 */

void _memcpy(void *dest, void *src, size_t size)
{
	size_t i;

	/* typecast src and dest addresses */
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	/* copy contents of src to dest */
	for (i = 0; i < size; i++)
		*(cdest + i) = *(csrc + i);
}

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size, in bytes allocated space for ptr
 * @new_size: size, in bytes of new memory block
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	/* validity checks */
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	/* allocate memory of new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* copy contents of old memory block */
	if (new_size < old_size)
		_memcpy(new_ptr, ptr, new_size);
	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);

	free(ptr);
	return (new_ptr);
}
