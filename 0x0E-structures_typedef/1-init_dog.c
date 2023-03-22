#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variables of type struct dog
 * @d: pointer to a dog struct
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Description: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
