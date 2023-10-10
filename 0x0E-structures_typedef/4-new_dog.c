#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog structure.
 * @name: variable holding the name of the dog
 * @age: variable holding the age of the dog
 * @owner: variable holding the name of the owner of the dog
 *
 * Return: pointer to new dog as (Success), NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}


	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
