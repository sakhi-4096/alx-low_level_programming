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

#endif
