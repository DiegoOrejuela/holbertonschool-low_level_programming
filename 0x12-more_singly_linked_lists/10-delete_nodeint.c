#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: list type listint_t.
 * @index: index position.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iterator;
	listint_t *temp;
	unsigned int counter;

	if (head == NULL || *head == NULL || index == 0)
		return (pop_listint(head));

	counter = 0;
	for (iterator = *head; iterator != NULL; iterator = (*iterator).next)
	{
		if (counter == index - 1)
			break;
		counter++;
	}
	if (iterator == NULL)
		return (-1);

	temp = (*iterator).next;
	(*iterator).next = (*(*iterator).next).next;
	free(temp);
	return (1);
}

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

	if (head == NULL || *head == NULL)
		return (-1);

	temphead = *head;
	*head = (**head).next;
	free(temphead);

	return (1);
}
