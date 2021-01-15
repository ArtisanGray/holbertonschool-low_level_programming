#include "hash_tables.h"

/**
 * hash_table_get - gets a key's value
 * @ht: hash table from argument
 * @key: key to parse table for
 * Return: NULL on failure, otherwise on success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *search;

	if (ht == NULL || key == NULL || ht->size == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	search = ht->array[idx];

	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			return (search->value);
		}
		search = search->next;
	}
	return (NULL);
}
