#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{

	char *p;
	unsigned int i;

	if(size == 0)
	{
		return(NULL);
	}

	p = malloc(size * sizeof(*p));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return(p);

}
