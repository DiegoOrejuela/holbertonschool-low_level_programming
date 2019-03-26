#include "lists.h"

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
