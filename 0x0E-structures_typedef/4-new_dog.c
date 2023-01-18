#include "dog.h"
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: pointer to name of the dog
 * @age: pointer to age of the dog
 * @owner: pointer to owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(struct new_dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return new_dog;
}
