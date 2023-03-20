#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: basic information about a dog, how
 * old it is and the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print all member info for struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d);

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees instance of struct dog
 * @d: instance to free
 */
void free_dog(dog_t *d);

#endif
