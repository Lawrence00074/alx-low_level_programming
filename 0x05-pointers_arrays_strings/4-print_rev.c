#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
int t = 0;
while (s[t] != '\0')
t++;
for (t = t - 1; t >= 0; t--)
_putchar(s[t]);
_putchar('\n');
}
