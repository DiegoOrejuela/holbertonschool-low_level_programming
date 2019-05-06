#include "holberton.h"
/**
 *_memcpy - copies memory area.
 *@dest: string to modify.
 *@src: string source.
 *@n: number of posicions to modify.
 *
 *Description: The function modify the string @dest for parameter, changing
 *the positions @n for the values in array @src.
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
