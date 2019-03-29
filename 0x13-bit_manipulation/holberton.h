#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _pow_recursion(int x, int y);
int _putchar(char c);
#endif