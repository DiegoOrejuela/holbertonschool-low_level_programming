#include "holberton.h"
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
