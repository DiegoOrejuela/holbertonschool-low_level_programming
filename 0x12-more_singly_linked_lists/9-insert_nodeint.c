#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: list type listint_t.
 * @idx: index position.
 * @n: data n.
 *
 * Return: the new element inserted or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *iterator;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	counter = 0;
	for (iterator = *head; iterator != NULL; iterator = (*iterator).next)
	{
		if (counter == idx - 1)
			break;
		counter++;
	}
	if (iterator == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).n = n;
	(*new).next = (*iterator).next;

	(*iterator).next = new;
	return (new);
}
