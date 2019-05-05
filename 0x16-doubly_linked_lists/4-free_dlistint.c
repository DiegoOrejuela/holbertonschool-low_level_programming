#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: double linked list dlistint_t.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodetemp;

	if (head != NULL)
	{
		for (; head != NULL; head = nodetemp)
		{
			nodetemp = (*head).next;
			free(head);
		}
	}
}
