#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a two dimensional
 * array of ints
 * @width: column
 * @height: row
 * Return: pointer to the new array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int row = 0, col = 0;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);

	while (row  < height)
	{
		ptr[row] = (int *)malloc(sizeof(int) * width);
		if (!ptr[row])
		{
			for (i = 0; i < height; i++)
			{
				if (ptr[i])
				{
					free(ptr[i]);
					ptr[i] = NULL;
				}
			}
			free(ptr);
			ptr = NULL;
			return (NULL);
		}
		while (col < width)
		{
			ptr[row][col] = 0;
			col++;
		}
		row++;
	}
	return (ptr);
}
