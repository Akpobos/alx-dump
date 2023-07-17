#include "dog.h"

/**
 * print_dog - Prints a struct
 * @d: The struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(niil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
