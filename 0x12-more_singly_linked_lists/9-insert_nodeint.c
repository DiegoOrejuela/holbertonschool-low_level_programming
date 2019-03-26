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
		if (idx == 0)
			return (add_nodeint(head, n));
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

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: list type listint_t.
 * @n: value n for the new node.
 *
 * Return: the new node or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).n = n;

	if (*head == NULL)
	{
		(*newnode).next = NULL;
		*head = newnode;
		return (newnode);
	}
	(*newnode).next = *head;
	*head = newnode;
	return (newnode);
}
