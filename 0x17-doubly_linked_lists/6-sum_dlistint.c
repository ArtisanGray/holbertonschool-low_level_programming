#include "lists.h"
/**
* sum_dlistint - returns the sum of all data in a linked list
* @head: head of linked list
*
* Return: a value >= 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
