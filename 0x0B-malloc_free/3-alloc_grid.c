#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
int t, o;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (t = 0; t < height; t++)
{
a[t] = (int *)malloc(sizeof(int) * width);
if (a[t] == NULL)
{
for (o = 0; o < t; o++)
free(a[o]);
free(a);
return (NULL);
}
for (o = 0; o < width; o++)
{
a[t][o] = 0;
}
}
return (a);
}
