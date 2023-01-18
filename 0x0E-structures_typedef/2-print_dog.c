#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the defined attributes of the dog
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		/* if else if using the ternery operator ?:*/
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age)
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
