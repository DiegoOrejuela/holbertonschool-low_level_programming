#include "holberton.h"
/**
 *_strchr - locates a character in a string.
 *@s: string source.
 *@c: character to find.
 *
 *Description: The function iterate the string @dest for parameter, searching
 *the positions where the value is same a @c. if the character is not, return
 *NULL.
 *Return: positions where s[n] = c or NULL.
 **/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i + 1] == c)
	{
		return (s + i + 1);
	}
	return (0);
}
