#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *i;
	int j;

	for (j = 0, i = h; i != NULL; j++, i = (*i).next)
	{
		;
	}
	return (j);
}
