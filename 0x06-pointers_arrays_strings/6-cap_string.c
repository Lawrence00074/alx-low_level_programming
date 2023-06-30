#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalize
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
int ndex = 0;
while (str[ndex])
{
while (!(str[ndex] >= 'a' && str[ndex] <= 'z'))
ndex++;
if (str[ndex - 1] == ' ' ||
str[ndex - 1] == '\t' ||
str[ndex - 1] == '\n' ||
str[ndex - 1] == ',' ||
str[ndex - 1] == ';' ||
str[ndex - 1] == '.' ||
str[ndex - 1] == '!' ||
str[ndex - 1] == '?' ||
str[ndex - 1] == '"' ||
str[ndex - 1] == '(' ||
str[ndex - 1] == ')' ||
str[ndex - 1] == '{' ||
str[ndex - 1] == '}' ||
ndex == 0)
str[ndex] -= 32;
ndex++;
}
return (str);
}
