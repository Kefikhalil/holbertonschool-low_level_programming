#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: 0
 */

void init_dog(struct dog *dog, char *name, float age, char *owner)
{
if (dog)
{
dog->name = name;
dog->age = age;
dog->owner = owner;
}
}
