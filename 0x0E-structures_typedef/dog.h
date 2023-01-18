#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: about the dog and data about it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*more prototypes for functions*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
