#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: input string of the name
 * @f: pointer to name
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
