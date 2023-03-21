#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises the dog variable
 *
 * struct dog- a struct representing dog
 * @d: the string
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
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
