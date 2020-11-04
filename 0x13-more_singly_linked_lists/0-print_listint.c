#include "lists.h"
/**
* print_listint - prints a linked list
* @h: head node of the list
*
* Return: 0 on fail, otherwise on success
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
