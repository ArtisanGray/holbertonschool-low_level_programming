#include "lists.h"
/**
* add_nodeint_end - add a node to the end of a linked list
* @head: head node of the linked list
* @n: data to fill node with
*
* Return: null on fail, node on success
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mov, *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	if (*head == NULL)
		*head = tmp;

	mov = *head;

	while (mov->next)
	{
		mov = mov->next;
	}
	mov->next = tmp;
	tmp->n = n;
	tmp->next = NULL;

	return (tmp);
}
