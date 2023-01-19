#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: input string of the name
 * @f: pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
