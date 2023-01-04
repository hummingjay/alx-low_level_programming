#include "main.h"

/**
 * _chessboard - function that prints chessboard
 * @a: pointer to array
 * @8: array 8 of char
 * first iterate thru row then define pointer the
 * iterate theu column and print each section
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		char *current_row = a[row];

		for (col = 0; col < 8; col++)
		{
			_putchar(*(current_row + col));
		}
		_putchar('\n');
	}
}
