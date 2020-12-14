#include "lists.h"
/**
* add_dnodeint_end - adds a node to the end of a doubly linked list
* @head: head node of linked list
* @n: data to fill new node data
*
* Return: NULL on fail, node otherwise
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newnode;
	newnode->prev = tmp;
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}
