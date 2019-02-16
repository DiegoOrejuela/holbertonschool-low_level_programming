#include "holberton.h"
/**
 *more_numbers - print the numbers from 0 to 14, ten times.
 *@void: nothing.
 *
 *Description: The function iterate in a for loop general that drive the ten
 *times, then there is a second loop that drive the print the numbers.
 *Return: nothing.
 */
void more_numbers(void)
{
	int pn;
	int sn;
	int c;
	int i;

	for (c = 0; c < 10; c++)
	{
		pn = '0';
		sn = '0';
		for (i = 0; i < 15; i++)
		{
			if (i <= 9)
			{
				if (i != 0)
				{
					pn++;
				}
			}
			if (i > 9)
			{
				pn = '1';
			}
			_putchar(pn);
			if (i > 9)
			{
				_putchar(sn);
				sn++;
			}
		}
		_putchar('\n');
	}
}
