#include "hash_tables.h"

/**
 * hash_table_get - retrieve value base
 * using a key
 *
 * @ht: pointer to the hash table
 * @key: pointer to key
 *
 * Return: value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	if (!node)
		return (NULL);

	if (strcmp(node->key, key) == 0)
		return (node->value);
	while (node)
	{
		node = node->next;
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
