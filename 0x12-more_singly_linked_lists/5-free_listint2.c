#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: list type listint_t.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	for ( ; *head != NULL; *head = (*(*head)).next)
		free(*head);
}
