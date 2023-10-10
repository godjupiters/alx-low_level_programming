#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a prototype function that returns the length of a string
 * @l: variable holding the string to count
 * Return: string lenght
 */

int _strlen(char *l)
{
	int cnt;

	cnt = 0;

	while (l[cnt] != '\0')
	{
		cnt++;
	}

	return (cnt);
}

/**
 * *_strcpy - a prototype function to copy a string
 * @store: variable holding the pointer location to store
 * @read: variable holding the copied string
 * Return: pointer variable
 */

char *_strcpy(char *store, char *read)
{
	int l, cnt;

	l = 0;

	while (read[l] != '\0')
	{
		l++;
	}

	for (cnt = 0; cnt < l; cnt++)
	{
		store[cnt] = read[cnt];
	}
	store[cnt] = '\0';

	return (store);
}

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
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	{
		return (dog);
	}
}
