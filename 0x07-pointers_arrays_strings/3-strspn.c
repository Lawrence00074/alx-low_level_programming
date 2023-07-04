#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int t, n, value, check;
value = 0;
for (t = 0; s[t] != '\0'; t++)
{
check = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[t])
{
value++;
check = 1;
}
}
}
return (0);
}
