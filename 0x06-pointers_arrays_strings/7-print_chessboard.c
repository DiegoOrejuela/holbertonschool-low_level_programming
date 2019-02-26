#include "holberton.h"
/**
 *_print_chessboard - locates a substring.
 *@a: string source.
 *
 *Description: The function iterate the string @haystack for parameter for
 *find the pattern the @needle
 *Return: the position @haystack or null.
 **/
void print_chessboard(char (*a)[8])
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
