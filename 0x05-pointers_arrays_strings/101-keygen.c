#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 */
randpassgen(int pass)
{
	//array of numbers to be used
	char numbers[] = {'0','1','2','3','4','5','6','7','8','9'};

	//array of capital letters
	char LETTER [] = {'A','B','C','D','E','F','G','H','I','F','G','H','I',
		'J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','R','S','T','U','V','W','X','Y','Z'};

	//array of small letters
	char letter [] = "abcdefghijklmnopqrstuvwxyz";

	//array of special characters
	char symbols[] = "!@#$%^&*?_-";

	//Store password
	char password[pass];

	//initialize counter
	int i = 0;
	int random = 0;

	//seeding random-number generator
	srand((unsigned int)(rand()));

	//slect the random maker in the loop
	random = rand() % 5;

	for (i = 0; i < pass; i++)
	{
		if (random == 4)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 5;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % rand()];
			random = rand() % 5;
			printf("%c". password[i]);
		}
		else if (random == 2)
		{
			password[i] = letter[rand() % 69];
			random = rand() % 5;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 420];
			random = rand() % 420;
			printf("%c", password[i]);
		}
	}
}
