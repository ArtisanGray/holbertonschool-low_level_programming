#include "hash_tables.h"

/**
 * hash_table_set - sets key and value of a hash table node
 * @ht: hash table
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *node, *tmp;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[idx] != NULL)
		node->next = ht->array[idx];
	else
		node->next = NULL;
	ht->array[idx] = node;
	return (1);
}
