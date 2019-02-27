#include "holberton.h"
/**
 *factorial - factorial of a given number.
 *@n: string source.
 *
 *Return: 0 if @n = -1, 1 if @n = 0 or 1 and the result factorial in other
 *numbers.
 **/
int factorial(int n)
{
	int rs = 0;

	if (n < 0)
	{
		rs = -1;
	}
	if (n == 0 || n == 1)
	{
		rs = 1;
	}
	if (n > 1)
	{
		rs = n * (factorial(n - 1));
	}
	return (rs);
}
