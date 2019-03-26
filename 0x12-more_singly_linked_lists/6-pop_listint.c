#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 *
 * @head: list type listint_t.
 *
 * Return: data the struct deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *temphead;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temphead = *head;
	n = (**head).n;

	*head = (**head).next;

	free(temphead);

	return (n);
}
