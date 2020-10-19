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
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: null on fail, dog on success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *stanley;
	char *stanname, *stanowner;
	int i, j;

	stanname = malloc(sizeof(char) * _strlen(name) + 1);
	/*allocates space for a copy of the dog's name*/
	if (stanname == NULL)
		return (NULL);
	stanowner = malloc(sizeof(char) * _strlen(owner) + 1);
	/*allocates space for a copy of the owner's name*/
	if (stanowner == NULL)
	{
		free(stanname);
		return (NULL);
	}

	for (i = 0; i < _strlen(name) + 1; i++)
		stanname[i] = name[i];
	for (j = 0; j < _strlen(owner) + 1; j++)
		stanowner[j] = owner[j];

	stanley = malloc(sizeof(dog_t));
	if (stanley == NULL)
	{
		free(stanowner);
		free(stanname);
		return (NULL);
	}

	stanley->name = stanname;
	stanley->age = age;
	stanley->owner = stanowner;

	return (stanley);
}
