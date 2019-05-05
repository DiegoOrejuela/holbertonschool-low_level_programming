#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double linked list dlistint_t.
 * @index: index of the node.
 *
 * Return: node in the index or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	for (i = 0, node = head; i < index && node != NULL; i++, node = (*node).next)
	{}
	return (node);
}
