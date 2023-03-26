#include <stdio.h>

int rand()
{
	static int run = -1;

	run++;
	if (run == 0)
		return 9;
	if (run == 1)
		return 8;
	if (run == 2)
		return 10;
	if (run == 3)
		return 24;
	if (run == 4)
		return 75;
	if (run == 5)
		return 9;
	/* now for a pseudo random number just incase */
	return run * run % 30000;
}
