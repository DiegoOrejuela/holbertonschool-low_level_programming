#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: string source.
 *
 *Description: The function iterate the position of the pointer for
 *finding the length.
 *Return: length the array.
 **/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[0] != '\0')
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
