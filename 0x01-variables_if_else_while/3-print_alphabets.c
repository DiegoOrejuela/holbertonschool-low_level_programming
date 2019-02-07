#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chl;

	for (chl = 'a'; chl <= 'z'; chl++)
	{
		putchar(chl);
		if (chl == 'z')
		{
			char chu;

			for (chu = 'A'; chu <= 'Z'; chu++)
			{
				putchar(chu);
			}
		}
	}
	putchar('\n');
	return (0);
}
