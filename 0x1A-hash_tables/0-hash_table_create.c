#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with the specified size.
 *
 * @size: The size of the hash table to create.
 *
 * Return: hash table on success, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	return (hash_table);
}
