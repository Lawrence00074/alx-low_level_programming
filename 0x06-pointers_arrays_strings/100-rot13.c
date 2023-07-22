#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
int t, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (t = 0; *(s + t); t++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(s + t))
{
*(s + t) = b[j];
break;
}
}
return (s);
}
}
