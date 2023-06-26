#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @t: The first integer to be swapped
 * @o: The second integer to be swapped
 * Return: nothing
 */
void swap_int(int *t, int *o)
/* the functions that swaps the values of two integers. */
{
int temp = *t;
*t = *o;
*o = temp;
}
