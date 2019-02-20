#include "holberton.h"
/**
 *puts_half - Write a function that prints half of a string.
 *@str: string to avaluate.
 *
 *Description: The function take a string and iterate the last half.
 **/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i))
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		j = (i / 2);
	}
	else
	{
		j = ((i - 1) / 2);
	}
	while (*(str + j))
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
