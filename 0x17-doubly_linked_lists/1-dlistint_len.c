#include "lists.h"
/**
* dlistint_len - returns the length of a doubly linked list
* @h: head node of the linked list
*
*
* Return: a value >= 0
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
