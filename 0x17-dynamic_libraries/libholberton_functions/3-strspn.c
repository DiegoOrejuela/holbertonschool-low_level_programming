#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring..
 *@s: string source.
 *@accept: characters to find.
 *
 *Description: The function iterate the string @s for parameter, and
 *inside iterate array @accept, searching the position where the value is
 *same. if the character is not same continualy, the program return the
 *lenght the array @s tha had coincidences continue.
 *Return: iterator the while big.
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
		j = 0;
	}
	return (i);
}
