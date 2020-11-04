#include "lists.h"
/**
* add_nodeint - adds a node to the beginning of the list
* @head: head node of the linked list
* @n: data to fill node with
*
* Return: new head node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
