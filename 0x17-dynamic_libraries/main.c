#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int i;
	
	for(i = 0; i < 6; i++)
		printf("%d\n", rand());

	return(0);
}
