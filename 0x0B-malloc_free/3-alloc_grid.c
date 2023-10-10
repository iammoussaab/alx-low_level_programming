#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **meee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	meee = malloc(sizeof(int *) * height);

	if (meee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		meee[x] = malloc(sizeof(int) * width);
		if (meee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(meee[x]);
			free(meee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			meee[x][y] = 0;
	}
	return (meee);
}
