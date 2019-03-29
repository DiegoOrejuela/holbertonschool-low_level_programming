#include "holberton.h"

/**
 * flip_bits - number of bits you would need to flip to get
 * from one number to another.
 * @n: number a.
 * @m: number b.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparation;
	unsigned int result;

	comparation = n ^ m;
	result = 0;
	while (comparation)
	{
		result += comparation & 1;
		comparation = comparation >> 1;
	}
	return (result);
}
