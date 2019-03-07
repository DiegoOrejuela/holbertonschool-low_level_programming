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

	if (width < 1 || height < 1)
		return (NULL);

	dp = malloc(sizeof(p) * height);

	if (dp == NULL)
	{
		free(dp);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p = malloc(sizeof(int) * width);
		dp[i] = p;
		if (p == NULL)
		{
			for ( ; i >= 0; i--)
			{
				free(dp[i]);
			}
			free(dp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			dp[i][j] = 0;
		}
	}
	return (dp);
}
