#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: string to avaluate.
 *@n: number the items's array.
 *
 *Description: The function take a array the type int and iterate it
 *for assign the first values in the last value, and viceversa.
 **/
char *string_toupper(char *str)
{
	int i = 0;

       	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
