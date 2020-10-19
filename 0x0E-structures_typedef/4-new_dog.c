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
	char *stanname = name, *stanowner = owner;

	stanley = malloc(sizeof(dog_t));
	if (stanley == NULL)
		return (NULL);

	stanley->name = stanname;
	stanley->age = age;
	stanley->owner = stanowner;

	return (stanley);
}
