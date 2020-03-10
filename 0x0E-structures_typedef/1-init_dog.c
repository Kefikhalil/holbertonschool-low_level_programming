#include "dog.h"

/**
 * init_dog - dog structure
 * @d: dog structure
 * @name: dog's name
 * @age: dog's age 
 * @owner: dog's owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
