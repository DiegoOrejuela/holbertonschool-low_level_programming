#include "holberton.h"
/**
 *print_diagonal - print '_' n times.
 *@n: times that '/' print.
 *
 *Description: The function print '/' n times.
 *Return: nothing.
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int k = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (n == 1)
			{
				_putchar(92);
				_putchar('\n');
			}
			if (n != 1)
			{
				for (j = 0; j < k; j++)
				{
					if (j != 0)
					{
						_putchar(' ');
					}
				}
				_putchar(92);
				_putchar('\n');
				if (k != n)
				{
					k++;
				}
			}
		}
	}
}
