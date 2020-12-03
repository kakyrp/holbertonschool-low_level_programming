#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 1 on success.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
