#include "main.h"
/**
 * more_numbers - Print 10 times the number from 0 to 14
 * Return: 10 times of the numbers from 0 to 14
 */
void more_numbers(void)
{
int t, o;
for (t = 0; t < 10; t++)
{
for (o = 0; o <= 14; o++)
{
if (o > 9)
{
_putchar((o / 10) + '0');
}
_putchar((o % 10) + '0');
}
_putchar('\n');
}
}
