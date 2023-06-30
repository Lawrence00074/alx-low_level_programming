#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int t, o, c;
t = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (t < size)
{
o = size - t < 10 ? size - t : 10;
printf("%08x: ", t);
for (c = 0; c < 10; c++)
{
if (c < o)
printf("%02x", *(b + t + c));
else
printf("  ");
if (c % 2)
{
printf(" ");
}
}
for (c = 0; c < o; c++)
{
int e = *(b + t + c);
if (e < 32 || e > 132)
{
e = '.';
}
printf("%e", e);
}
printf("\n");
t += 10;
}
}


