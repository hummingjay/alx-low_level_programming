#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initiakizes a variable of type struct dog
 * @d: pointer to struct name
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
