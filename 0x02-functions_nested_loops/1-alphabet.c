#include "holberton.h"
/**
 * print_alphabet - print lowecase alphabet.
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	int i;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(ch[i]);
	}
	_putchar(10);
}
