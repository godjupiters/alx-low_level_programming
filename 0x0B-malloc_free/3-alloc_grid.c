#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a prototype function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: variable holding the value of width
 * @height: variable holding the value of height
 * Return: 2D array of integers
*/

int **alloc_grid(int width, int height)
{
	int **pPnt;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	pPnt = malloc(sizeof(int *) * height);

	if (pPnt == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		pPnt[h] = malloc(sizeof(int) * width);

		if (pPnt[h] == NULL)
		{
			for (; h >= 0; h--)
				free(pPnt[h]);

			free(pPnt);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			pPnt[h][w] = 0;
	}

	{
		return (pPnt);
	}
}
