#include "holberton.h"
/**
 *print_triangle - prints a triangle.
 *@size: triangle high.
 *
 *Description: The function prints a triangle with the symbol '#'.
 *Return: nothing.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			k--;
		}
	}
}
