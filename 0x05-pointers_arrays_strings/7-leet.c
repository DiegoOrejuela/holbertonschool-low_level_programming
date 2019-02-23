#include "holberton.h"
/**
 *leet - encodes a string into 1337.
 *@array: string to avaluate.
 *
 *Description: The function compare two array, and convert the first
 *in code 1337, trough the positions the arra with the array that
 *save the elements of codification.
 **/
char *leet(char *array)
{
	int i = 0;
	int j = 0;
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char key[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (array[i])
	{
		while (str[j])
		{
			if (array[i] == str[j])
			{
				array[i] = key[j];
			}
			j++;
		}
		i++;
		j = 0;
	}

	return (array);
}
