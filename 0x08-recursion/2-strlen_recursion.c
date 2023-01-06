#include "main.h"

/**
 * _strlen_recursion - function that returns the
 * length of a string
 *
 * @s: String to be measured
 * Return: length of string
 */
int _strlen_recursion(char *s)
{

	/**define where the recursion will end*/
	if (*s == '\0')
	{
		/*return value 0 and stop the code*/
		return (0);
	}
	else
	{
		/**return value 1 which will be added up for each
		 * string value to find length so 1 + 1 and
		 * move the value up by 1 upto where
		 * code will end with the + 0,
		 */
		return ( 1 + _strlen_recursion(s + 1));
	}
}
