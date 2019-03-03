#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @argc: number arguments in argc[].
 * @argv: array de pointers to console arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
