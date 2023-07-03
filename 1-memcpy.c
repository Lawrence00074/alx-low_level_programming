#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int t;
for (t = 0, t < n; t++)
dest[t] = src[t];
return (dest);
}
