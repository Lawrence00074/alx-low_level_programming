#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int t = 0;
int p_d;
int r_d;
int t2;
int p_d2;
int r_d2;
while (t <= 98)
{
p_d = (t / 10 + '0');
r_d = (t % 10 + '0');
t2 = 0;
while (t2 <= 99)
{
p_d2 = (t2 / 10 + '0');
if
(t < t2)
{
putchar(p_d);
putchar(r_d);
putchar(' ');
putchar(p_d2);
putchar(r_d2);
if
(t != 98)
{
putchar(',');
putchar(' ');
}
}
t2++;
}
t++;
}
putchar('\n');
return (0);
}
