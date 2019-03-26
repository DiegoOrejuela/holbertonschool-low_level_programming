#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list type listint_t.
 *
 * Return: the length of list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *iterator;
	size_t counter;

	counter = 0;
	for (iterator = h; iterator != NULL; iterator = (*iterator).next)
	{
		printf("%d\n", (*iterator).n);
		counter++;
	}

	return (counter);
}
