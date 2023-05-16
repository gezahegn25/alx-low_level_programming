#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - function that returns a pointer to 2
 * @width: input width
 * @height: input height
 * Return: NULL on failure
 */


int **alloc_grid(int width, int height)
{
	int **x;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		x[y] = malloc(sizeof(int) * width);

		if (x[y] == NULL)
		{
			for (; y >= 0; y--)
				free(x[y]);

			free(x);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			x[y][z] = 0;
	}

	return (x);
}

