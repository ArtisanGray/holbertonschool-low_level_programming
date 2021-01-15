#include "hash_tables.h"

/**
 * hash_table_create - allocates a new hashtable of x size
 * @size: size of hash table array
 *
 * Return: pointer to new table or NULL on malloc fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *table;
	hash_node_t **node;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t *) * size);
	if (node == NULL)
		return (NULL);

	table->size = size;
	table->array = node;
	return (table);
}
