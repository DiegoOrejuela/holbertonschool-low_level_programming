#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list of list_t.
 *
 * Return: the length the linked list.
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		node = (*node).next;
	}
	return (i);
}
