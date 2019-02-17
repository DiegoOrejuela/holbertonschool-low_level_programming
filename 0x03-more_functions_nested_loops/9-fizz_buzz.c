#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int rtr;
	int rfive;

	for (i = 1; i <= 100; i++)
	{
		rtr = i % 3;
		rfive = i % 5;

		if (rtr != 0 && rfive != 0)
		{
			printf("%d ", i);
		}
		if (rtr == 0 || rfive == 0)
		{
			if (rtr == 0 && rfive != 0)
			{
				printf("Fizz ");
			}
			if (rtr != 0 && rfive == 0)
			{
				printf("Buzz ");
			}
			if (rtr == 0 && rfive == 0)
			{
				printf("FizzBuzz ");
			}
		}
	}
	printf("\n");
	return (0);
}
