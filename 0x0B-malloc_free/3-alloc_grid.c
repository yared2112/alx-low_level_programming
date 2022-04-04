#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 * Otherwise - a pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **twoD;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

twoD = malloc(sizeof(int *) * height);

if (twoD == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
twoD[i] = malloc(sizeof(int) * width);

if (twoD[i] == NULL)
{
for (; i >= 0; i--)
free(twoD[i]);

free(twoD);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
twoD[i][j] = 0;
}
return (twoD);
}
