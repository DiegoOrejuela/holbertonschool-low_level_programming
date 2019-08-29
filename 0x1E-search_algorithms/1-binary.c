#include "search_algos.h"

/**
 * linear_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search.
 *
 * Return: Your function must return the first index where value is located.
 * If value is not present in array or if array is NULL, your function must
 * return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int j, start = 0, end = size - 1, index = 0, temp_size = size;

	if (!array)
		return (-1);

	for (temp_size = size / 2; start <= end; temp_size = (temp_size / 2)) /*Garantiza que haya índice para iterar*/
	{
		if (temp_size == 0)
			index += 1;

		printf("Searching in array: ");
		for (j = start ; j <= end; j++)
			printf("%d%s", array[j], (j != end ? ", " : ""));
		printf("\n");

		if (array[temp_size + index] < value)
		{
			start = temp_size + index + 1;
			index += temp_size;
		}
		else if (array[temp_size + index] > value)
		{
			end = temp_size + index - 1;
			printf("temp_size = %d\n", temp_size);
			printf("end = %d\n", end);
		}
		else
		{
			return(temp_size + index);
		}
	}

	return (-1);
}
