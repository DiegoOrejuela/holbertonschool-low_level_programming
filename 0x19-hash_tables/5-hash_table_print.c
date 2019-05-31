#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *coma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < (*ht).size; i++)
	{
		temp = (*ht).array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", coma, (*temp).key, (*temp).value);
			coma = ", ";
			temp = (*temp).next;
		}
	}
	printf("}\n");
}
