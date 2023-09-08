#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: A pointer to a hash table.
 * Return: Nada
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		i++;
	}

	free(head->array);
	free(head);
}
