#include "holberton.h"
/**
 *cap_string - encodes a string into 1337.
 *@str: string to avaluate.
 *
 *Description: The function take a array and this is comparated with a
 *array that have separators. If the character of the two arrays in the
 *iteration is same,  the following character letter is upper.
 *Return: the str string changed.
 **/
char *leet(char *str);
{
	int i = 0;
	int j = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		      '{', '}'};

	while (str[i])
	{
		if (str[0])
		{
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				str[0] -= 32;
			}
		}
		while (sep[j])
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
		j = 0;
	}

	return (str);
}
