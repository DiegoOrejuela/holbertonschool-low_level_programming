#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char ch[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(ch[i]);
	}
	_putchar(0x0A);
	return (0);
}
