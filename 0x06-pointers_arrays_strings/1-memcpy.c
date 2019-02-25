#include "holberton.h"
/**
 *_memset - fills memory with a constant byte.
 *@s: string to avaluate.
 *@b: value char.
 *@n: number of posicions to modify.
 *
 *Description: The function modify the string @s for parameter, changing the
 *positions @n for the value @b.
 *Return: array modified.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
