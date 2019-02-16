#include "holberton.h"
/**
 *print_numbers - print the natural numbers.
 *@void: nothing.
 *
 *Description: The function iterate in a for loop each number natural,
 *and print them with the function _putchar.
 *Return: nothing.
 */
void print_numbers(void)
{
	int dg;

	for (dg = '0'; dg <= '9'; dg++)
	{
		_putchar(dg);
	}
	_putchar('\n');
}
