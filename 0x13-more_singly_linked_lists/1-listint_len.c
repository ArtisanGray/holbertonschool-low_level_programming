#include "lists.h"
/**
* listint_len - returns the length of a linked list
* @h: head node of the linked list
*
* Return: an integer value, 0-max
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
