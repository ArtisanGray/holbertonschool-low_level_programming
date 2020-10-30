#include "lists.h"
/**
* _strlen - returns string length
* @s: string to measure
*
*
* Return: length of string
*/
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;
	return (i);
}
/**
* add_node_end - adds a new node to the end of a singly linked list
* @head: pointer to the beginning of the list
* @str: string to set value for member in list
* Return: NULL on fail, new node on success
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tnode, *temp;

	tnode = malloc(sizeof(list_t));
	if (tnode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = tnode;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	/* end of the list, temp->next = NULL, set value to new node. */
	temp->next = tnode;
	tnode->str = strdup(str);
	tnode->len = _strlen(str);
	tnode->next = NULL;

	return (tnode);
}
