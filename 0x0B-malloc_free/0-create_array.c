#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: number of characters
 * @c: initial array character
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int t;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (t = 0; t < size; t++)
{
p[t] = c;
}
return (p);
}
