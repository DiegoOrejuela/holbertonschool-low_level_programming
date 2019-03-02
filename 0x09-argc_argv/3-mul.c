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
	if ((argc == 1) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
