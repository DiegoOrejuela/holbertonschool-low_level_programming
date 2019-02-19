#include "holberton.h"
/**
 *_strlen - returns the length of a string.
 *@s: string to avaluate.
 *
 *Description: The function take a string and iterate it with a loop while
 *until the value '\0'. The times iteration are saved in a int variable 'i'.
 *Return: the length of a string.
 **/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
