#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */
int print_rev(char *s)
{
int t = 0;
while (s[t] != '\0')
{
t++
}
for (t -= 1; t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}
