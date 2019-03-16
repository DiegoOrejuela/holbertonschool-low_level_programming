#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * struct print - struct print
 *
 * @character: The char operator.
 * @f: The function associated.
 *
 * Description: object for print.
 */
typedef struct print
{
	char *character;
	void (*f)(va_list);
} print;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_charp(va_list list);
#endif
