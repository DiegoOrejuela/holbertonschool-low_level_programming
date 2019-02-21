#include "holberton.h"
/**
 *_strcat - concatenates two strings.
 *@dest: string dest.
 *@src: string for add dest.
 *
 *Description: The function take two array and iterate for paste one
 *in other.
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
	while(*(src + j) != '\0')
	{
		j++;
	}

	if(n > j)
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
