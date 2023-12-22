#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	hash_table_t *temp_ht;
	unsigned long int i;

	if (ht == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			free(temp);
			free(temp->key);
			free(temp->value);
			node = node->next;
		}
	}
	temp_ht = ht;
	free(temp_ht->array);
	free(ht);
}
