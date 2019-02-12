#include "holberton.h"
/**
 * print_alphabet_x10 - print lowecase alphabet 10 times.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(ch[j]);
		}
		_putchar(10);
		i++;
	}
}
