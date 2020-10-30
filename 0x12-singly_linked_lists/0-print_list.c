#include "lists.h"
/**
* print_list - prints a singly linked list
* @h: head pointer for start of list
*
* Return: 0 on fail, otherwise if success
*/
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else if (temp->str == NULL)
			printf("[0] (nil)\n");
		temp = temp->next;
		i++;
	}
	return (i);
}
