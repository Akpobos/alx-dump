#include "dog.h"

/**
 * init_dog - Initializes dog struct
 * @d: pointer
 * @name: The name
 * @age: the age
 * @owner: The owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
