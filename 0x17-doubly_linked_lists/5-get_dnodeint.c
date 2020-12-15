#include "lists.h"
/**
* get_dnodeint_at_index - gets a node at a particular index
* @head: head node of linked list
* @index: index of node to get
*
* Return: node on success, NULL on failure.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		head = head->next;
		i++;
		if (i == index)
			return (head);
	}
	return (NULL);
}
