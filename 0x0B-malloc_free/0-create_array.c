#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * the array is initialized with a specific char
 * @size: size of the array
 * @c: the character being initialized
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
