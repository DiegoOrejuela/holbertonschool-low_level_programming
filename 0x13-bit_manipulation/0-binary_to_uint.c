#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	result = 0;
	j = 0;
	i--;
	for ( ; i >= 0; i--, j++)
	{
		result += (b[i] - '0') * _pow_recursion(2, j);
	}

	return (result);
}

/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: number raised.
 *@y: number power.
 *
 *Return: the result pow. If the number is less that 0, return -1.
 **/
int _pow_recursion(int x, int y)
{
	int rs = 0;

	if (y == 0)
	{
		rs = 1;
	}
	if (y == 1)
	{
		rs = x;
	}
	if (y < 0)
	{
		rs = -1;
	}
	if (y > 1)
	{
		rs = x * _pow_recursion(x, y - 1);
	}
	return (rs);
}
