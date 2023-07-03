#include "main.h"
/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: pointed destination
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;
for (t = 0, t < n; t++)
s[t] = b;
return (s);
}
