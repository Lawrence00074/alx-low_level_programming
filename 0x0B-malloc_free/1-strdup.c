#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
unsigned int i, t;
char *s;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
s = malloc(i *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (t = 0; t < i; t++)
{
s[t] = str[t];
}
return (s);
}
