#include "holberton.h"
/**
 *print_diagonal - print '_' n times.
 *@n: times that '/' print.
 *
 *Description: The function print '/' n times.
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
