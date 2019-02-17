#include "holberton.h"
/**
 *print_square - prints a square.
 *@size: square side.
 *
 *Description: The function prints a square with the symbol '#'.
 *Return: nothing.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
