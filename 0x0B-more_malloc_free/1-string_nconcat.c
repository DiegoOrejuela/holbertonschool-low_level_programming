#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string for assign.
 * @s2: second string for assign.
 * @n : number the strings to copy.
 *
 * Return: Null o the pointer with the changues.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, size_s1, size_s2, flag;

	i = 0;
	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	if(size_s2 != 0)
		size_s2--;

	if (size_s2 != 0 && size_s2 > n)
	{
		size_s2 = n + 1;
		flag = 1;
	}
	if (size_s1 > 0 && size_s2 > 0)
	{
		size_s1 -= 1;
	}
	p = malloc(size_s1 + size_s2);
	if (p == NULL)
	{
		return (NULL);
	}
	for ( ; i < size_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < size_s2; j++)
	{
		p[i] = s2[j];
		if (flag == 1 && j == size_s2 - 1)
		{
			p[i] = '\0';
		}
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
	i++;
	return (i);
}
