#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: list type listint_t.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	for ( ; head != NULL; head = (*head).next)
		free(head);
}
