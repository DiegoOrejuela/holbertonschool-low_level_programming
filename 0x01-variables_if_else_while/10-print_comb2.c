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
	int pn = 48;
	int sn = 48;
	int i;

		for (i = 0; i < 10; i++)
		{
			putchar(pn);
			putchar(sn);
			if (pn != 57)
			{
				putchar(44);
				putchar(32);
			}
			else if (pn == 57)
			{
				if (sn != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			sn++;
			if (i == 9)
			{
				if (pn != 57)
				{
					i = -1;
					sn = 48;
					pn++;
				}
			}
		}
		putchar('\n');
		return (0);
}
