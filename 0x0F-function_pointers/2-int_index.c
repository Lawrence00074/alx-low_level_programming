#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: pointer to a function to be used to compare values
 * Return: sucessful (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int s, o;
if (size > 0 && array && cmp)
{
for (s = 0; s < size; s++)
{
o = cmp(array[s]);
if (o)
break;
}
if (s < size)
return (s);
}
return (-1);
}
