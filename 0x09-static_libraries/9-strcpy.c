#include "main.h"
/**
 * char *_strcpy - copies the string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int t = 0;
int o = 0;
while (*(src + t) != '\0')
{
t++;
}
for ( ; o < t ; o++)
{
dest[o] = src[o];
}
dest[t] = '\0';
return (dest);
}
