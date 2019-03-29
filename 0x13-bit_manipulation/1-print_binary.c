#include "holberton.h"

void print(unsigned long int n, unsigned int d);

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned int d = 0;

	if (n == 0)
		_putchar('0');
	print(n, d);
	(void)d;
}

/**
 * print - recursion function.
 * @n: number to convert.
 * @d: variable to saved the module.
 *
 * return: nothing.
 */

void print(unsigned long int n, unsigned int d)
{
	if (n != 0)
	{
		d = n & 1;
		n = n >> 1;
		print(n, d);
		_putchar(d + '0');
	}
}
