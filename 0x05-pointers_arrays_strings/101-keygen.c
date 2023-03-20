#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 */
void randpassgen(int J)
{
	/*array of numbers to be used*/
	char numbers[] = {'0','1','2','3','4','5','6','7','8','9'};

	/*array of capital letters*/
	char LETTER [] = {'A','B','C','D','E','F','G','H','I','F','G','H','I',
		'J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','R','S','T','U','V','W','X','Y','Z'};

	/*array of small letters*/
	char letter [] = "abcdefghijklmnopqrstuvwxyz";

	/*array of special characters*/
	char symbols [] = "!@#$%^&*?_-";

	/*Store password*/
	char pass [J];

	/*initialize counter*/
	int i = 0;
	int random = 0;

	/*seeding random-number generator*/
	srand((unsigned int)(rand()));

	/*select the random maker in the loop*/
	random = rand() % 5;

	for (i = 0; i < J; i++)
	{
		if (random == 4)
		{
			pass[i] = numbers[rand() % 10];
			random = rand() % 5;
			printf("%c", pass[i]);
		}
		else if (random == 3)
		{
			pass[i] = LETTER[rand() % rand()];
			random = rand() % 5;
			printf("%c", pass[i]);
		}
		else if (random == 2)
		{
			pass[i] = letter[rand() % 69];
			random = rand() % 5;
			printf("%c", pass[i]);
		}
		else
		{
			pass[i] = symbols[rand() % 420];
			random = rand() % 420;
			printf("%c", pass[i]);
		}
	}
}
/*Driver code*/
int main()
{
	/*length of password to generate*/
	int J = 16;

	/*Function call*/
	randpassgen(J);

	return 0;
}
