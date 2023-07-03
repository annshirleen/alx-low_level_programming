#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: min numbers in range
 * @max: highest number in range
 * Return: adress of the new array
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);
	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);

	while (i < range)
	{
		*(ptr + i) = min + 1;
		i++;
	}
	return (ptr);
}
