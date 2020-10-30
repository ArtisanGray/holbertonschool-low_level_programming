#include "lists.h"
/**
* free_list - frees a singly_linked list
* @head: start node of list
*
* Return: none
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
