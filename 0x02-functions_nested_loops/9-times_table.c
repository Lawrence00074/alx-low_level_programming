#include "main.h"
/**
 * times_table - Prints 9 times table
 * Return: empty output
 */
void times_table(void)
{
int p, e, t, r, o;
for (p = 0; p <= 9; p++)
{
for (e = 0; e <= 9; e++)
{
t = p * e;
if (t > 9)
{
r = t % 10;
o = (t - r) / 10;
_putchar(44);
_putchar(32);
_putchar(o + '0');
_putchar(r + '0');
}
else
{
if (e != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(t + '0');
}
}
_putchar('\n');
}
}
