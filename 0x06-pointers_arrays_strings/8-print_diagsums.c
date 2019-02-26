#include "holberton.h"
/**
 *_print_diagsums - locates a substring.
 *@a: string source.
 *@size: pattern strings.
 *
 *Description: The function iterate the string @haystack for parameter for
 *find the pattern the @needle
 *Return: the position @haystack or null.
 **/
void print_diagsums(int *a, int size)
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
