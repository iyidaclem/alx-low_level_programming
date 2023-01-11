#include "hash_tables.h"

/**
* hash_table_create - function that create a hash table
* @size: size of the hash table
* Returns: point to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t **));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
