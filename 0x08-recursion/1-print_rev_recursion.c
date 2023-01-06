#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 * @s: string to be reversed
 * Return: Null
 */
void _print_rev_recursion(char *s)
{
	/*define the limit to stop*/
	if (*s != '\0')
	{
		/*build stack now*/
		_print_rev_recursion(s + 1);
		/* Print out the string now from the stack*/
		_putchar(*s);
	}
}
