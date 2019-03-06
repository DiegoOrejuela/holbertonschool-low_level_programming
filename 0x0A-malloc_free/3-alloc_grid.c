#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: dimension width.
 * @height: dimension heigth.
 *
 * Return: Null o the pointer with the changues.
 */
int **alloc_grid(int width, int height)
{
	int **dp;
	int *p;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);
	dp = malloc(sizeof(dp) * height);
	if (dp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p = malloc(sizeof(int) * width);
		if (p == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			p[j] = 0;
		}
		dp[i] = p;
	}
	return (dp);
}
