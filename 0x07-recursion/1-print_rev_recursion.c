#include "holberton.h"
/**
 *_print_rev_recursion - prints a string in reverse.
 *@s: string source.
 *
 *Description: The function print in reverse character to character.
 **/
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
