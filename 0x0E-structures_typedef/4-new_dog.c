#include "dog.h"
/**
* _strlen - returns string length
* @s: string to measure
*
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;
	return (i);
}
/**
*
*
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *stanley;
	char *stanname, *stanowner;
	int i, j;

	stanname = malloc(sizeof(char) * _strlen(name));
	/*allocates space for a copy of the dog's name*/
	if (stanname == NULL)
		return (NULL);
	stanowner = malloc(sizeof(char) * _strlen(owner));
	/*allocates space for a copy of the owner's name*/
	if (stanowner == NULL)
		return (NULL);

	for (i = 0; i < _strlen(name); i++)
		stanname[i] = name[i];
	for (j = 0; j < _strlen(owner); j++)
		stanowner[j] = owner[j];

	stanley = malloc(sizeof(dog_t));
	if (stanley == NULL)
		return (NULL);

	stanley->name = stanname;
	stanley->age = age;
	stanley->owner = stanowner;

	return (stanley);
}
