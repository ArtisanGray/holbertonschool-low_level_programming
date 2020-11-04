#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: head node of the linked list
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
