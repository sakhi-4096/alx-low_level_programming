# C - more malloc, free # 
------
* **malloc** *- the malloc() function allocates size bytes and returns a pointer to the allocated memory. the memory is not initialized.*
* **free** *- the free() function frees the memory space previously allocated by malloc(), calloc(), realloc(). if the passed parameter is a null pointer, the function does nothing.*
* **exit** *- cause normal process termination. the  exit() function causes normal process termination and the value of status & 0xFF is returned to the parent.*
* **calloc** *- allocate and free dynamic memory.  The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns  a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be succesfully  passed  to  free().*
* **realloc** *- allocate and free dynamic memory. The realloc() function changes the size of the memory block pointed to by ptr to size bytes. The  contents  will be unchanged in the range from the start of the region up to the minimum of the old and new sizes.*

------

### General Objectives ###
 * How to use use the *exit* function
 * What are the functions *calloc* and *realloc* from the standard library and how to use them

------

0 - Write a function that allocates memory using malloc.
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

1 - Write a function that concatenates two strings.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string

2 - Write a function that allocates memory for an array, using malloc.
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL

3 - Write a function that creates an array of integers.
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min (included) to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL

------
### Author ###
* Sakhile Ndlazi
