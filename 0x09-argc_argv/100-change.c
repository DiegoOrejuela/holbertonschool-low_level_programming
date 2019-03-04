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
	int cents = 0;
	int money;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
	}
	if (money / 25 != 0)
	{
		cents += money / 25;
		money = (money % 25);
	}
	if (money / 10 != 0)
	{
		cents += money / 10;
		money = (money % 10);
	}
	if (money / 5 != 0)
	{
		cents += money / 5;
		money = (money % 10);
	}
	if (money / 2 != 0)
	{
		cents += money / 2;
		money = (money % 2);
	}
	if (money / 1 != 0)
	{
		cents += money / 1;
		money -= (money % 1);
	}
	printf("%d\n", cents);
	return (0);
}
