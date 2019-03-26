#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list type listint_t.
 *
 * Return: the length of list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *iterator;
	size_t counter;

	counter = 0;
	for (iterator = h; iterator != NULL; iterator = (*iterator).next)
	{
		counter++;
	}

	return (counter);
}
