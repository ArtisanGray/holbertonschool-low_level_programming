#include "lists.h"
/**
* free_dlistint - frees a double linked list
* @head: head node of the list
*
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
