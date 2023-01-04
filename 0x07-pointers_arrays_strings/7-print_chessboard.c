#include "main.h"

/**
 * _chessboard - function that prints chessboard
 * @a: pointer to array
 * @8: array 8 of char
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* iterating through rows*/
	for (row = 0; row < 8; row++)
	{
		/* pointer to current row*/
		char *current_row = a[row];

		/* iterate through columns and print each section*/
		for (col = 0; col < 8; col++)
		{
			_putchar(*(current_row + col));
		}
		_putchar('\n');
	}
}
