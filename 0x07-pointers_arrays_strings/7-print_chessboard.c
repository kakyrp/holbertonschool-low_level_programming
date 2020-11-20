#include "holberton.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: Is the matrix.
 * Return: 1 on success.
 */
void print_chessboard(char (*a)[8])
{
	int i, j, size;

	size = 8;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
