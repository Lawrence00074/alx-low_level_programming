#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The deatination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dle = 0, t;
while (dest[dle])
{
dle++;
}
for (t = 0; src[t] != 0; t++)
{
dest[dle] = src[t];
dle++;
}
dest[dle] = '\0';
return (dest);
}
