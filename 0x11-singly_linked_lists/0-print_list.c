#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list of list_t.
 *
 * Return: the lenth the linked list.
 */
size_t print_list(const list_t *h)
{
	int i;
	char *string;
	const list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		string = (*node).str;
		if ((*node).str == NULL)
			string = "(nil)";

		printf("[%d] %s\n", (*node).len, string);
		node = (*node).next;
	}
	return (i);
}
