#include "holberton.h"
/**
 *_strstr - locates a substring.
 *@haystack: string source.
 *@needle: pattern strings.
 *
 *Description: The function iterate the string @haystack for parameter for
 *find the pattern the @needle
 *Return: the position @haystack or null.
 **/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

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
