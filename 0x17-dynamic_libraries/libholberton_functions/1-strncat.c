#include "holberton.h"
/**
 *_strncat - concatenates two strings.
 *@dest: string dest.
 *@src: string for add dest.
 *@n: númber bytes for print.
 *
 *Description: The function take two array and iterate for to find
 *their size. The, other loop iterate for paste src inside dest.
 *Return: dest array with the src's content pasted.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}

	if (n > j)
	{
		n = j;
	}

	while (k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	return (dest);
}
