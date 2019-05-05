#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list..
 * @head: double linked list dlistint_t.
 *
 * Return: if the list is empty, return 0, else return te sum of data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	for (i = 0 ; head != NULL; i += (*head).n, head = (*head).next)
	{}
	return (i);
}
