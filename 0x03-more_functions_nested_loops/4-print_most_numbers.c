#include "holberton.h"
/**
 *print_most_numbers - print the natural numbers whitout '2' and '4'.
 *@void: nothing.
 *
 *Description: The function iterate inside conditional in a for loop each
 *number natural and print them with the function _putchar without
 *exceptions.
 *Return: nothing.
 */
void print_most_numbers(void)
{
	int dg;

	for (dg = '0'; dg <= '9'; dg++)
	{
		if (dg != '2' && dg != '4')
		{
			_putchar(dg);
		}
	}
	_putchar('\n');
}
