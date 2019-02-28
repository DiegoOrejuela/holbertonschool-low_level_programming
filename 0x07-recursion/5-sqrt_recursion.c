#include "holberton.h"
void mymultiplicate(int *i, int cond, int incr);
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number operand.
 *
 *Return: the result square root.
 **/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0)
	{
		return (0);
	}
	mymultiplicate(&i, n, 1);
	return (i);
}

/**
 *mymultiplicate - multiplicate a number until a condition.
 *@i: pointer number.
 *@cond: number condition.
 *@incr: number increment.
 **/
void mymultiplicate(int *i, int cond, int incr)
{
	if ((*i * *i) == cond)
	{
		;
	}
	else if ((*i * *i) < cond)
	{
		*i += incr;
		mymultiplicate(i, cond, incr);
	}
	else
	{
	*i = -1;
	}
}
