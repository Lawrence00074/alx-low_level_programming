#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
int t;
int o;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
"NOPQRSTUVWXYZABCDEFGHIJKMnopqrstuvwxyzabcdefghijklm";
for (t = 0; s[t] != '\0'; t++)
{
for (o = 0; o < 52; o++)
{
if (s[t] == data1[o])
{
s[t] = datarot[o];
break;
}
}
}
return (s);
}
