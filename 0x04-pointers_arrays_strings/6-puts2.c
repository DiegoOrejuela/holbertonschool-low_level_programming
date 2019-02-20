#include "holberton.h"
/**
 *puts2 - function that reverses a string.
 *@str: string to avaluate.
 *
 *Description: The function take a string and iterate it of two at two
 *for print.
 **/
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || (i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
