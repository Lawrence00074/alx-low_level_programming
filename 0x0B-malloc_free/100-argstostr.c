#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
int t, r, k = 0, n = 0;
char *s;
if (ac <= 0 || av == NULL)
return (NULL);
for (t = 0; t < ac; t++)
{
for (r = 0; av[t][r]; r++)
n++;
n++;
}
n++;
s = malloc(n *sizeof(char));
if (s == NULL)
return (NULL);
for (t = 0; t < ac; t++)
{
for (r = 0; av[t][r]; r++)
{
s[k] = av[t][r];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
