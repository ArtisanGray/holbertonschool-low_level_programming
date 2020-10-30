#include "lists.h"
/**
* list_len - lists the length of a list
* @h: head pointer to the first node in list
*
* Return: 0 if null, otherwise success
*/
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
