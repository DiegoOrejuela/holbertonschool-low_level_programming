#include "holberton.h"
/**
 *print_line - print '_' n times.
 *@n: times that '_' print.
 *
 *Description: The function print '_' n times.
 *Return: nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
