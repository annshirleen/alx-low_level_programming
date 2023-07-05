#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - this structure is describes a dog
 * @name: name of the dog
 * @owner: dog owner
 * @age: age of the dog
 * Description: a struct defining a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/*@dog_t: new type of struct dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
