#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char t;
int o;
o = 0;
while (o < 10)
{
for (t = 'a'; t <= 'z'; t++)
{
_putchar(t);
}
_putchar('\n');
o++;
}
}
