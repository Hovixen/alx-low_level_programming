#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function frees struct dog.
 * @d: pointer to the struct dog
 * Return: void
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
