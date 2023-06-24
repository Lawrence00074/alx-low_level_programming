#include "main.h"
/**
 * print_triangle - Print a triangle according to parameter
 * @size: The size of the triangle
 * Return: empty
 */
void print_triangle(int size)
{
int t, o, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < size; t++)
{
for (o = size - t; o > 1; o--)
{
_putchar(32);
}
for (b = 0; b <= t; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
