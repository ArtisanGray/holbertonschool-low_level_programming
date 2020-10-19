#include "dog.h"
/**
* init_dog - initializes the data of a given struct
* @d: struct to initialize values for
* @name: name of dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: null
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
