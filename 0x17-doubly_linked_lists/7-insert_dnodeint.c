#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a node at a given index
* @h: head node of linked list
* @idx: index of node to insert
* @n: data to fill node with
*
* Return: null on fail, node on success
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *tmp, *htmp;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL)
	{
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	htmp = *h;
	while (htmp)
	{
		htmp = htmp->next;
		i++;
		if (i == idx)
		{
			tmp = htmp->next;
			htmp->next = newnode;
			newnode->prev = htmp;
			newnode->next = tmp;
			return (newnode);
		}
	}
	return (NULL);
}
