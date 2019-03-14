#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int oper1;
	int oper2;
	int rs;
	(void)argc;

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper1 = atoi(argv[1]);
	oper2 = atoi(argv[3]);

	rs = get_op_func(&argv[2][0])(oper1, oper2);
	printf("%d\n", rs);
	return (0);

}
