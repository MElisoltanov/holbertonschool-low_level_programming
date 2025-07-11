#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure describing a dog
 * @name: Pointer to a string for the dog's name
 * @age: Float value for the dog's age
 * @owner: Pointer to a string for the dog's owner
 *
 * Description: Structure to store name, age, and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
