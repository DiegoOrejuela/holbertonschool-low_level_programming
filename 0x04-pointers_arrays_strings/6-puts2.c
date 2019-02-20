#include "holberton.h"
/**
 *rev_string - function that reverses a string.
 *@s: string to avaluate.
 *
 *Description: The function take a string and iterate it with first a loop
 *while until the value '\0' for to save the long array. After, again
 *iterate 's' for to assign the new values.
 **/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i+=2;
	}
	_putchar('\n');
}
