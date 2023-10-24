#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Prints a chessboard to the console.
 * @a: A pointer to an array of 8 arrays of 8 characters, representing
 * the chessboard.
 * Return : empty
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
