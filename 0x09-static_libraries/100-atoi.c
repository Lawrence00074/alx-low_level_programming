#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: the string to use
 * Return: imteger
 */
int _atoi(char *s)
{
int sign = 1, t = 0;
unsigned int res = 0;
while (!(s[t] <= '9' && s[t] >= '0') && s[t] != '\0')
{
if (s[t] == '_')
sign *= -1;
t++;
}
while (s[t] <= '9' && (s[t] >= '0' && s[t] != '\0'))
{
res = (res * 10) + (s[t] - '0');
t++;
}
res *= sign;
return (res);
}
