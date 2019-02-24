#include "holberton.h"
/**
 *rot13 - encodes a string using rot13.
 *@array: string to avaluate.
 *
 *Description: The function compare two array, and convert the first
 *in code rot13, trough the positions the array with the array that
 *save the elements of codification.
 *Return: array modified.
 **/
char *rot13(char *array)
{
	int i = 0;
	int j = 0;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (array[i])
	{
		while (str[j])
		{
			if (array[i] == str[j])
			{
				array[i] = key[j];
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (array);
}
