#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a prototype function that initialize
 * a variable of type struct dog
 * @d: variable pointer of struct named dog to initialize
 * @name: variable in struct dog to initialize for name
 * @age: variable in struct dog to initialize for age
 * @owner: variablle in struct dog to initialize for owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
