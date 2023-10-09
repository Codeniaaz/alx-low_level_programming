#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: a pointer to struct
 *@name: char
 *@age: float
 *@owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
