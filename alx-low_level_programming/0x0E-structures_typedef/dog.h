#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A dog struct
 * @name: Name of the dog
 * @age: Age
 * @owner: Dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
