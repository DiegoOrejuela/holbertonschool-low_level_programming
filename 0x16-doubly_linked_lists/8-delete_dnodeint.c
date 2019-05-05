#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * linked list.
 * @head: double linked list dlistint_t.
 * @index: index to insert node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_ref;

	if (head == NULL || *head == NULL)
		return (-1);

	node_ref = get_dnodeint_at_index(*head, index);
	if (node_ref ==  NULL)
		return (-1);
	else if ((*node_ref).prev == NULL)
	{
		if ((*node_ref).next != NULL)
		{
			(*(*node_ref).next).prev = NULL;
		}
		*head = (*node_ref).next;
		free(node_ref);
		return (1);

	}
	else if ((*node_ref).next == NULL)
	{
		(*(*node_ref).prev).next = NULL;
		free(node_ref);
		return (1);
	}
	(*(*node_ref).prev).next = (*node_ref).next;
	(*(*node_ref).next).prev = (*node_ref).prev;
	free(node_ref);
	return (1);
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
