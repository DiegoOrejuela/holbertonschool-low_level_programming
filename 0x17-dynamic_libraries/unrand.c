#include <stdio.h>
#include "holberton.h"

int rand(void)
{
	static int i;

	i = 0;
	i++;

	if (i == 1)
		return(9);
	else if (i == 2)
		return(5);
	else if (i == 3)
		return(1);
	else if (i == 4)
		return(23);
	else if (i == 5)
		return(61);
	else
		return(8);
}
