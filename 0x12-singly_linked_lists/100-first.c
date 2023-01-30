#include <stdio.h>
#include <stdlib.h>
/**
 * pre_main - function to print string before main is
 * executed.
 *
 * Return: 0
 */
void pre_main(void) __attribute__ ((constructor));

void pre_main(void)
{
	char *message;

	message = "You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n";
	printf("%s", messsage);
}
