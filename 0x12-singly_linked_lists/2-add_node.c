#include "lists.h"
/**
* add_node - adds a node to the head of the list
* @head: head pointer to the beginning of the list
* @str: string to duplicate in this new node
*
* Return: NULL on fail, new node pointer on success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tnode;
	unsigned int i;

	tnode = malloc(sizeof(list_t));
	if (!tnode)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		continue;

	tnode->str = strdup(str);
	tnode->len = i;
	tnode->next = *head;
	*head = tnode;
	return (tnode);
}
