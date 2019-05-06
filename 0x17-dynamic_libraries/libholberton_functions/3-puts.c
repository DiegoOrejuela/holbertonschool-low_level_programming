#include "holberton.h"
/**
 *_puts - prints a string.
 *@str: string to avaluate.
 *
 *Description: The function take a string and iterate it with a loop while
 *until the value '\0', print each character.
 **/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
