#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: string key.
 * @size: gives you the index of a key.
 *
 * Return: index at which the key/value pair should be stored in
 * the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
		exit(-1);

	index = hash_djb2(key) % size;

	return (index);
}
