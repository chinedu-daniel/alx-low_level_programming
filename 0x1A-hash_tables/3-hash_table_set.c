#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table to add/update the key/value pair
 * @key: the key string
 * @value: the value associated with the key
 * Return: 1 if the addition/update succeeds, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[index];
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!ht || !key || !*key)
		return (0);

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value), temp->value = strdup(value);
			return (temp->value ? 1 : 0);
		}
		temp = temp->next;
	}

	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key), free(new_node);
		return (0);
	}
	new_node->next = ht->array[index], ht->array[index] = new_node;
	return (1);
}

