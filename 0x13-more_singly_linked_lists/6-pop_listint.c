#include "lists.h"
/**
* pop_listint - pops the head node from a singly linked list
* @head: head node of linked list
*
* Return: 0 or positive number
*/
int pop_listint(listint_t **head)
{
	int tmp = 0;
	listint_t *temp;

	if (*head)
	{
		tmp = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (tmp);
}
