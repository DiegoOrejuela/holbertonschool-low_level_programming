#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: list type listint_t.
 *
 * Return: the result of the variable @n of all elements.
 */
int sum_listint(listint_t *head)
{
	listint_t *iterator;
	int result;

	if (head == NULL)
		return (0);

	result = 0;
	for (iterator = head; iterator != NULL; iterator = (*iterator).next)
	{
		result += (*iterator).n;
	}

	return (result);
}
