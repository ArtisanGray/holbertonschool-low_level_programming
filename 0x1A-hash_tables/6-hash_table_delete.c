#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table from argument
 * Return: nothing
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2, **tmparr;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	tmparr = ht->array;
	while (i < ht->size)
	{
		tmp = tmparr[i];
		while (tmp != NULL)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free_tmp(tmp2);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/**
* free_tmp - frees a node to bypass gcc error
* @node: node from argument
*
* Return: nothing
*/
void free_tmp(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
