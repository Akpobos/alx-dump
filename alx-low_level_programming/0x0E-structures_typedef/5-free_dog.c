#include "dog.h"

/**
 * free_dog - Free dog memory
 * @d: The dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
