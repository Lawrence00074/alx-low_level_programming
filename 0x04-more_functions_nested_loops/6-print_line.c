#include "main.h"
/**
 * print_line - Draws a straight line according to parameter.
 * @n: The number of lunes to be drawn
 * Return: empty
 */
void print_line(int n)
{
int s;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (s = 0; s < n; s++)
{
_putchar(95);
}
_putchar('\n');
}
}
