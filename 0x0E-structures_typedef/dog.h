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

#endif
