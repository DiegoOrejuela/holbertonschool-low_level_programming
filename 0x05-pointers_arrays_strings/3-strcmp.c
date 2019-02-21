#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1: array one.
 *@s2: array two.
 *
 *Description: The function take two arrays and return any number
 *diferent of 0 if the characters coparated are diferents, and if
 *this are the same, return 0.
 *Return: return the sustrat that s1[i] and s2[i].
 **/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int rs;

	while ((s1[i] - s2[i]) == 0 && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	rs = s1[i] - s2[i];
	return (rs);
}
