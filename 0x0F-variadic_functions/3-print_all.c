#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: type of variable.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	print func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_charp}
	};
	va_list list;
	int i = 0;
	int j = 0;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(func[j]).character)
			{
				func[j].f(list);
				switch (format[i + 1])
				{
				case '\0':
					;
					break;
				default:
					printf(", ");
				};
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - prints alone char.
 * @list: list.
 *
 * Return: nothing.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - prints alone int.
 * @list: list.
 *
 * Return: nothing.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints alone float.
 * @list: list.
 *
 * Return: nothing.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_charp - prints alone charp.
 * @list: list.
 *
 * Return: nothing.
 */
void print_charp(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);

}
