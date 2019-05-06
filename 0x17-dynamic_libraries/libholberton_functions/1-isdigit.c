#include "holberton.h"
/**
 *_isdigit - identify if variable 'c' is a digit or any character.
 *@c: is the letter income for de user.
 *
 *Description: The function compare the variable 'c' with each natural number.
 *Return: 1 if 'c' is a natural number and 0 if is other character .
 */
int _isdigit(int c)
{
	int dg;
	int rt;

	for (dg = '0'; dg <= '9'; dg++)
	{
		if (c == dg)
		{
			rt = 1;
			dg = '9' + 1;
		}

		if (dg == '9')
		{
			rt = 0;
		}
	}
	return (rt);
}
