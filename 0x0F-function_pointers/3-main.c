#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - check code
 * @atoi: convert string input to integer
 *
 * Return: 98 if arg wrong or / by zero or 
 * arg more than 2
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == "/" || *operator == "%") && (num2 == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);
	return (0);
}
