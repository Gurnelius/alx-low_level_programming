#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);

			if (node->next != NULL && i < ht->size - 1)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
