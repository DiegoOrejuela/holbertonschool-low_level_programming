#include "lists.h"

/**
 * add_nodeint_end - new node at the end of a listint_t list.
 *
 * @head: list type listint_t.
 * @n: value n for the new node.
 *
 * Return: the new node or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	for (i = *head; (*i).next != NULL; i = (*i).next)
	{
		;
	}
	(*i).next = newnode;
	return (newnode);
}
