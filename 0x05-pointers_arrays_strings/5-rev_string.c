#include "main.h"
/**
 * rev_string - reverses a  string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
char rv = s[0];
int c = 0;
int t;
while (s[c] != '\0')
c++;
for (t = 0; t < c; t++)
{
c--;
rv = s[t];
s[t] = s[c];
s[c] = rv;
}
}
