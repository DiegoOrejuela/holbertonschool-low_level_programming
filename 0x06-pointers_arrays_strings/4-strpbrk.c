#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: string source.
 *@accept: characters to find.
 *
 *Description: The function iterate the string @s for parameter, and
 *inside iterate array @accept, searching the position where the value is
 *same for return this position. If any character is same, the program
 *return null.
 *Return: the position the @s or NULL.
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
