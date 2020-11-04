#include "lists.h"
/**
* free_listint - frees a linked list
* @head: head node of linked list
*
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
