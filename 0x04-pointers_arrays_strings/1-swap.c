#include "holberton.h"
/**
 *swap_int - waps the values of two integers.
 *@a: value 1.
 *@b: value 2.
 *
 *Description: The function take two pointer int variable in its parameters
 * and swaps the value of the variables that appoint.
 */
void swap_int(int *a, int *b)
{
	int aValue = *a;

	*a = *b;
	*b = aValue;
}
