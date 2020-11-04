#include "lists.h"
/**
* sum_listint - returns the sum of elements in a linked list
* @head: head pointer to linked list
*
* Return: positive number, or 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
