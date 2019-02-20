#include "holberton.h"
/**
 *rev_string - function that reverses a string.
 *@s: string to avaluate.
 *
 *Description: The function take a string and iterate it with first a loop
 *while until the value '\0' for to save the long array. After, again
 *iterate 's' for to assign the new values.
 **/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char aux;

	while (*(s + i) != '\0')
	{
		i++;
	}

	i--;
	while (i != j && i > j)
	{
		aux = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = aux;
		i--;
		j++;
	}
}
