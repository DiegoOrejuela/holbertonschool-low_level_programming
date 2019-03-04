#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *@argc : number arguments.
 *@argv : arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int changes[] = {25, 10, 5, 2, 1};
	int cents = 0;
	int money;
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		cents += money / changes[i];
		money = money % changes[i];
	}
	printf("%d\n", cents);
	return (0);
}
