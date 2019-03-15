#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array with numbers.
 * @size: size array;
 * @cmp: pointer of function.
 *
 * Return: i if there is matches, and -1 if not.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while(i < 6)
	{
		if(*s == *(ops[i]).op)
		{
			return(ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
