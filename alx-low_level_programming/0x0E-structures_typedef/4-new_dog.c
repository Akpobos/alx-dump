#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog Age
 * @owner: Dog owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;
	
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
