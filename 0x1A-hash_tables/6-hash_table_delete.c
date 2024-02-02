#include "hash_tables.h"
/**
 * hash_table_delete - code to delete table
 * @ht: pointer
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
