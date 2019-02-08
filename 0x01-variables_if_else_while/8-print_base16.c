#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int ch = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
