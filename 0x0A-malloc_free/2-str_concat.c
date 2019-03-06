#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated.
 * @s1: first string for assign.
 * @s2: second string for assign.
 *
 * Return: Null o the pointer with the changues.
 */
char *str_concat(char *s1, char *s2)
{

	char *p;
	int i, j, size_s1, size_s2;

	i = 0;

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);

	p = malloc(size_s1 + size_s2);

	if (p == NULL)
	{
		return (NULL);
	}

	for ( ; i < size_s1; i++)
	{
		p[i] = s1[i];
		if (i < size_s1 - 1)
			p[i + 1] = s1[i + 1];
	}
	for (j = 0; j < size_s2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);

}

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

	if (s == NULL)
		return (0);

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
