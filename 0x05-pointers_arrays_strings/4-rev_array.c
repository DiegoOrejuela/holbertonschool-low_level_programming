#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: string to avaluate.
 *@n: number the items's array.
 *
 *Description: The function take a array the type int and iterate it
 *for assign the first values in the last value, and viceversa.
 **/
void reverse_array(int *a, int n)
{
	int i = 0;
	char aux;

	n--;
	if (n <= 0)
	{
		;
	}
	if (n > 0)
	{
		while (i != n && i < n)
		{
			aux = *(a + i);
			*(a + i) = *(a + n);
			*(a + n) = aux;
			n--;
			i++;
		}
	}
}
