#include "holberton.h"

int rand(void)
{
	static int i;

	i++;

	if (i == 1)
		return(9);
	else if (i == 2)
		return(8);
	else if (i == 3)
		return(10);
	else if (i == 4)
		return(24);
	else if (i == 5)
		return(75);
	else
		return(9);
}

void time(void)
{
	;
}

void srand(void)
{
	;
}
