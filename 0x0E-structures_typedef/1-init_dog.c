#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type of struct dog to initialize variable
 * @d: initializes struct dog  pointer
 * @name: the name to initialize
 * @age: age to initialize
 * @owner: the owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
