#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int t, o;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (t = 0; n[t] != '\0'; t++)
{
for (o = 0; o < 10; o++)
{
if (n[t] == s1[o])
{
n[t] = s2[o];
}
}
}
return (n);
}
