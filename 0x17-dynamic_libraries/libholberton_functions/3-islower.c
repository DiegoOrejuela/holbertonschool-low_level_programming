#include "holberton.h"
/**
 *_islower - identify if variable 'c' is lowercase or uppercase.
 *@c: is the letter income for de user.
 *
 *Description: The function compare the variable 'c' with *two arrays that save
 *all alphabet at lowercase and uppercase.
 *Return: 1 if is lowercase and 0 if is uppercase.
 */
int _islower(int c)
{
	int i;
	int j;
	char ch_lower[] = "abcdefghijklmnopqrstuvwxyz";
	char ch_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int whatIs;

	for (i = 0; i < 26; i++)
	{
		if (c == ch_lower[i])
		{
			whatIs = 1;
		}
	}

	for (j = 0; j < 26; j++)
	{
		if (c == ch_upper[j])
		{
			whatIs = 0;
		}
	}
	return (whatIs);
}
