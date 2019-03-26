#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: list type listint_t.
 * @index: index element to delete.
 *
 * Return: element listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	temp = head;

	counter = 0;
	for ( ; temp != NULL; temp = (*temp).next)
	{
		if (counter == index)
		{
			return (temp);
		}
		counter++;
	}
	return (0);
}
