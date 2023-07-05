#include "dog.h"

/**
 * new_dog - This function creates a new dog
 * @name: This is the dog's name
 * @owner: This is the owner of the dog
 * @age: dog's age
 * Return: address to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
	int l1, l2;

	l1 = strlen(name);
	l2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
