#include "lists.h"
/**
* delete_dnodeint_at_index - deletes a node at an index
* @head: head node of linked list
* @index: indice as to delete node
*
* Return: -1 on fail, 1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		if (i == index)
		{
			return (1);
		}
	}
	return (-1);
}
