#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - retrurns a new structure
 * @name: name string
 * @age: age of type float
 * @owner: owner of type string
 *
 * return: structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
