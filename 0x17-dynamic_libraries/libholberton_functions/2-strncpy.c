#include "holberton.h"
/**
 *_strncpy - copies a string..
 *@dest: string dest.
 *@src: string for copy inside dest.
 *@n: númber bytes for copy.
 *
 *Description: The function take two array and set the values dest while the
 *number bytes is less a n and the some position that src is '\0'. If after
 *the loop i continue been less a n, so change the following values for '\0'.
 *Return: dest array with the src's copied.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
