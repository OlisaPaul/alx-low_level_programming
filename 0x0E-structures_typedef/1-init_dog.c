#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog 
 * @d: a structure
 * @name: a name string
 * @age: an age integer
 * @owner: owner of type string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* validate if d initiated correctly */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
