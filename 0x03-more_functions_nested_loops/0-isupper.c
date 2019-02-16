#include "holberton.h"
/**
 *_isupper - identify if variable 'c' is lowercase or uppercase.
 *@c: is the letter income for de user.
 *
 *Description: The function compare the variable 'c' with the uppercase
 *alphabet.
 *Return: 1 if is lowercase and 0 if is uppercase.
 */
int _isupper(int c)
{
	int au;
	int rt;

	for (au = 'A'; au <= 'Z'; au++)
	{
		if (c == au)
		{
			rt = 1;
			au = 'Z' + 1;
		}

		if  (au == 'Z')
		{
			rt = 0;
		}
	}
	return (rt);
}
