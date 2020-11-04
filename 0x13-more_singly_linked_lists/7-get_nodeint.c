#include "lists.h"
/**
* get_nodeint_at_index - gets a node and returns it from a linked list
* @head: head node of the list
* @index: index node to find
*
* Return: null on fail, node on success
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i < index && tmp; i++)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
