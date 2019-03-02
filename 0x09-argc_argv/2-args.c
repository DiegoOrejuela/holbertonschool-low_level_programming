#include <stdio.h>
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
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
