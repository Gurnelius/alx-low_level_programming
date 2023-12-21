#include "hash_tables.h"

/**
 * hash_table_set - add element to a hash
 * table
 *
 * @ht: pointer to a hash table
 * @key: element's key
 * @value: element's value
 * Return: 1 - success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->next = NULL;
	node->value = strdup(value);
	node->key = (char *) index;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		current = ht->array[index];

		while (current->next != NULL)

			current = current->next;
		current->next = node;
	}
	return (1);
}
