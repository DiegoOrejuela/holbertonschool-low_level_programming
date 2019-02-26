#include "holberton.h"
/**
 *set_string - locates a substring.
 *@s: string source.
 *@to: pattern strings.
 *
 *Description: The function iterate the string @haystack for parameter for
 *find the pattern the @needle
 *Return: the position @haystack or null.
 **/
void set_string(char **s, char *to)
{
	int i = 0;
	int j = 0;

	if(needle[0] == '\0')
	{
		return (0);
	}
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
		if (needle[j] == '\0')
		{
			return (haystack + i - j);
		}
	}
	return (0);
}
