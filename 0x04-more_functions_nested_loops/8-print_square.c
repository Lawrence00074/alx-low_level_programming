#include "main.h"
/**
 * print_square - Prints squares according to number of times
 * @size: The number of square or number of times
 * Return: empty
 */
void print_square(int size)
{
int t, o;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < size; t++)
{
for (o = 0; o < size; o++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
