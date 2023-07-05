#include "function_pointers.h"

/**
 * array_iterator - funtion that executes a function given as a
 * parameter on each element of an array
 * @array: array being executed
 * @size: size of array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
