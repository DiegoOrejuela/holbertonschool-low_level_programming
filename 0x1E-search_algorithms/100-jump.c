#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Write a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search.
 *
 * Return: Your function must return the first index where value is located.
 * If value is not present in array or if array is NULL, your function must
 * return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int raiz = sqrt(size), end = raiz, start = 0, size_int = size,
		size_other = size;

	if (!array || size == 0)
		return (-1);

	for ( ; start < size_int; start += raiz, end += raiz)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[end] >= value || end > size_int)
		{
			size_int = end;
			printf("Value found between indexes [%d] and [%d]\n",
			       start, end);
			for ( ; start <= end && start < size_other; start++)
			{
				printf("Value checked array[%d] = [%d]\n",
				       start, array[start]);
				if (array[start] == value)
				{
					return (start);
				}
			}
		}
	}
	return (-1);
}
