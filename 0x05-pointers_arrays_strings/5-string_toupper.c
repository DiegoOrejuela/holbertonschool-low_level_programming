#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: string to avaluate.
 *
 *Description: The function take a array the type char and iterate it
 *for assign the values of lowercase to uppercase if the values are
 *letters.
 *Return: the str string in uppercase.
 **/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
