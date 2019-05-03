#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *i;
	int j;

	for (j = 0, i = h; i != NULL; j++, i = (*i).next)
		printf("%d\n", (*i).n);
	return (j);
}
