#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at n index
* @head: head node of the linked list
* @idx: index in linked list to insert a new node
* @n: data to fill node with
*
* Return: NULL on fail, node on success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newNode, *nextNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newNode;
	tmp = *head;
	for (i = 1; i < idx && tmp->next != NULL; i++)
		tmp = tmp->next;
	if (i == idx)
	{
		nextNode = tmp->next;
		tmp->next = newNode;
		newNode->n = n;
		newNode->next = nextNode;
		return (newNode);
	}
	return (NULL);
}
