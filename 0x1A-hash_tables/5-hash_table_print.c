#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (!ht || !ht->array)
		return;

	printf("{");
	temp = NULL;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				printf(", ");
				temp = NULL;
			}
			if (node != NULL)
				temp = node;
			node = node->next;
		}
	}
	if (temp != NULL)
		printf("'%s': '%s'", temp->key, temp->value);
	printf("}\n");
}
