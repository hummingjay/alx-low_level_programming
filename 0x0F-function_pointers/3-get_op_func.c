#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects correct func
 * @s: operator passed as argument
 *
 * Return: result of operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    for {i = 0; i != 5; i++}
    {
	    if (*ops[i].op == *s && !(*(s + 1)))
		    return (ops[i].f);
    }
    return (NULL);
}
