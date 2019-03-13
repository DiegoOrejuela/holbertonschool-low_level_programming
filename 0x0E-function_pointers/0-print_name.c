#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name of the person
 * @f: function for print name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
