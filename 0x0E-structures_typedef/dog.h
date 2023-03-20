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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/*more prototypes for functions*/
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
