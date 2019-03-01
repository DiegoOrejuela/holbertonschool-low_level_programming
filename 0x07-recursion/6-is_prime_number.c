#include "holberton.h"
void my_prime_calculate(int *i, int *prime, int *n, int *rs);
/**
 *is_prime_number - return if the number is prime or not.
 *@n: number operand.
 *
 *Return: 1 if is prime or 0 if not.
 **/
int is_prime_number(int n)
{
	int i = 2;
	int prime = 0;
	int rs = 0;

	my_prime_calculate(&i, &prime, &n, &rs);
	return (rs);
}

/**
 *my_prime_calculate - calculate a number prime.
 *@i: iterator.
 *@prime: counter to found prime.
 *@n: condition; .
 *@rs: result;
 **/
void my_prime_calculate(int *i, int *prime, int *n, int *rs)
{
	if (*i < 37)
	{
		if (*n > 1 && *n < 37)
		{
			if ((*n % *i) == 0)
			{
				*prime += 1;
			}
			if (*i == 36)
			{
				if (*prime == 1)
				{
					*rs = 1;
				}
				if (*prime > 1)
				{
					*rs = 0;
				}
			}
		}
		if (*n > 36)
		{
			if ((*n % *i) == 0)
			{
				*prime += 1;
			}
			if (*i == 36)
			{
				if (*prime > 0)
				{
					*rs = 0;
				}
				else
				{
					*rs = 1;
				}
			}
		}
		*i += 1;
		my_prime_calculate(i, prime, n, rs);

	}
}
