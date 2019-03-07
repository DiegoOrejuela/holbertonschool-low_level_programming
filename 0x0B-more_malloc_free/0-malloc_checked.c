#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc..
 * @b: size pointer.
 *
 * Return: pointer with space in memoty indicated for @b.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
