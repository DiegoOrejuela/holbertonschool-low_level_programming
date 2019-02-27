#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 *matrix of integers.
 *@a: pointer.
 *@size: size pointer;
 *
 *Description: The function sum the the values in diagonals the a array
 *same in your dimensions x and y.
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int dd;
	int di;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		dd += *(a + i);
	}
	for (i = (size - 1); (i + 1) < (size * size); i += (size - 1))
	{
		di += *(a + i);
	}
	printf("%d, %d\n", dd, di);
	dd = 0;
	di = 0;
}
