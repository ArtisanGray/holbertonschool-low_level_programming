#include "lists.h"
/**
* add_dnodeint - adds a node to the beginning to doubly linked list
* @head: head node of the linked list
* @n: data to inject into newly alloc'd node
*
* Return: NULL on fail, node otherwise
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
		*head = newnode;
	}
	else
		*head = newnode;

	return (newnode);
}
