#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to convert.
 * @index: postion the number to return.
 *
 * Return: the byte in the position of index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!(index > (sizeof(n) * 8)))
		return ((n >> index) & 1);

	return (-1);
}
