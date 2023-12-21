#include "hash_tables.h"

/**
 * key_index - get the hash from a key
 * @key: key to calculate hash
 * @size: size of the hash table
 *
 * Return: hashed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	index = index % size;

	return (index);
}
