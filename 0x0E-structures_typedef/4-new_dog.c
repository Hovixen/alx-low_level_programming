#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function creates a new dog
 * @name: pointer to the character of dog name
 * @age: age of the dog
 * @owner: pointer to the character of dog owner.
 * Return: returns the struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, len_name = 0, len_owner = 0;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	while (name[len_name] != '\0')
		len_name++;

	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog->name = malloc(len_name + 1);
	new_dog->owner = malloc(len_owner + 1);

	if ((new_dog->name) == NULL || (new_dog->owner) == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; i < len_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
