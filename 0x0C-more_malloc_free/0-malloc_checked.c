#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: sizeof memory to be allocated
 * Return: address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
