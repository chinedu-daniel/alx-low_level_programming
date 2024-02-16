#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		hash_node_t *temp = ht->array[i];

		while (temp != NULL)
		{
			hash_node_t *next = temp->next;

			free(temp->key);
			free(temp->value);
			free(temp);

			temp = next;
		}
	}

	free(ht->array);
	free(ht);
}
