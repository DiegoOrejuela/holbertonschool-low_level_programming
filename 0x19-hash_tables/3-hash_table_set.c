#include "hash_tables.h"

/**
 * hash_table_set - gives you the index of a key.
 * @ht: hash table you want to add or update the key/value.
 * @key: key strings.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise;
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	if (key == NULL || key == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, (*ht).size);

	temp = (*ht).array[index];
	while (temp != NULL) /*Elements of list have a key same to parameter key*/
	{
		if (strcmp((*temp).key, key) == 0)
		{
			free((*temp).value);
			(*temp).value = strdup(value);
			return (1);
		}
		temp = (*temp).next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	(*node).key = strdup(key);
	(*node).value = strdup(value);

	if ((*ht).array[index] == NULL) /*Add node when position is empty*/
	{
		(*node).next = NULL;
		(*ht).array[index] = node;
		return (1);
	}

	/*add node to the beginning of the list if exist node in postion*/
	(*node).next = (*ht).array[index];
	(*ht).array[index] = node;
	return (1);
}
