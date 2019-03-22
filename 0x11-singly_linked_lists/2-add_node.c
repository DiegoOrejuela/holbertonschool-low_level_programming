#include "lists.h"
#include <string.h>
int _strlen(const char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: linked list of list_t.
 * @str: name strings.
 *
 * Return: the length the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	string = strdup(str);
	length = _strlen(str);

	(*new).str = string;
	(*new).len = length;
	(*new).next = *head;

	*head = new;

	return (*head);
}

/**
 *_strlen - returns the length of a string.
 *@s: string to avaluate.
 *
 *Description: The function take a string and iterate it with a loop while
 *until the value '\0'. The times iteration are saved in a int variable 'i'.
 *Return: the length of a string.
 **/
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
