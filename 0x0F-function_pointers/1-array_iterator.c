#include "function_pointers.h"
/**
 * array_iterator - executes a func given as a param on each eleme of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to a function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t p;
if (array && action)
{
for (p = 0; p < size; p++)
{
action(array[p]);
}
}
}
