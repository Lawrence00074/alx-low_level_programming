#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int a;
int v;
int y = 0;
while (y < 10)
{
v = 0;
while (v < 10)
{
a = 0;
while (a < 10)
{
if
(a != v && v != y && y < v && v < a)
{
putchar('0' + y);
putchar('0' + v);
putchar('0' + a);
if
(a + v + y != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
a++;
}
v++;
}
y++;
}
putchar('\n');
return (0);
}
