#include "dog.h"

/**
 * init_dog - tis function initializes a struct dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;

	return;
}
