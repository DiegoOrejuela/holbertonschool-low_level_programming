#include <stdio.h>
#include <stdlib.h>
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
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			;
		}
		else
		{
			if (atoi(argv[i]) != 0)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
