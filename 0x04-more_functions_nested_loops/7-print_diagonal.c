#include "main.h"
/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @n: The number of time to print diagonal lines
 * Return: empty
 */
void print_diagonal(int n)
{
int t, o;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < n; t++)
{
for (o = 0; o < t; o++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
