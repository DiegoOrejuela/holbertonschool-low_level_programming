#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: count arguments.
 * @av: pointers's array arguments.
 *
 * Return: pointer changued or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int size;
	int run = 0;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			;
		}
		j++;
		size += j;
	}
	p = malloc(sizeof(char) * size + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[run] = av[i][j];
			run++;
		}
		p[run] = '\n';
		run++;
	}
	return (p);

}
