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
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	return (dest);
}
