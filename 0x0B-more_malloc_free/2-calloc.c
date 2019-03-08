#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using malloc..
 * @nmemb: number member to add.
 * @size: size type;
 *
 * Return: pointer changued or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return NULL;
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
