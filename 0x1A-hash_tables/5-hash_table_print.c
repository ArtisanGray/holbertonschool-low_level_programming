#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table from argument
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	int test = 0;

	if (ht == NULL || ht->size == 0)
		return;

	printf("{");

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (test == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				test++;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
