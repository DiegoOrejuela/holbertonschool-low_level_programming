#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double linked list dlistint_t.
 * @idx: index to insert node.
 * @n: number value.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t list_len;
	dlistint_t *node_ref;

	if (h == NULL)
		return (NULL);

	list_len = dlistint_len(*h);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx < list_len)
	{
		node_ref = get_dnodeint_at_index(*h, idx);
		return (add_dnodeint(&node_ref, n));
	}
	else if (list_len == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}

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
	{}
	return (j);
}
