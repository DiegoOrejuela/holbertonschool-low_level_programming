#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers, followed
 *by a new line.
 *@a: array to avaluate.
 *@n: number of elements for print.
 *
 *Description: The function take an array and iterate printing the values
 *selected.
 **/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}

}
