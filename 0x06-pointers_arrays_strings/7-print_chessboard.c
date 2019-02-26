#include "holberton.h"
/**
 *print_chessboard - prints the chessboard.
 *@a: string source.
 *
 *Description: The function print all items iteratating
 *the multidimensional array. When is the final the an item, print
 *new line.
 **/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
