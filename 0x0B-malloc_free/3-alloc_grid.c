#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Width
 * @height: Height
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
int y;
int **array;

array = malloc(height * sizeof(int *));
if (width <= 0 || height <= 0)
return (NULL);
if (array == NULL)
return (NULL);
for (y = 0; y < height; y++)
{
array[y] = malloc(width * sizeof(int));
}
return (array);
}
