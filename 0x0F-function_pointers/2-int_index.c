#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array being searched over
 * @size: number of elements
 * @cmp: pointer to function
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
