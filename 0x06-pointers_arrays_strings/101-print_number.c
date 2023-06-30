#include "main.h"
/**
 * print_number - print number chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
unsigned int t1;
t1 = n;
if (n < 0)
{
_putchar('-');
t1 = -n;
}
if (t1 / 10 != 0)
{
print_number(t1 / 10);
}
_putchar((t1 % 10) + '0');
}
