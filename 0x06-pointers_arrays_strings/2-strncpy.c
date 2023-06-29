#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copy fro src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int ndex = 0, src_len = 0;
while (src[ndex++])
src_len++;
for (ndex = 0; src[ndex] && ndex < n; ndex++)
dest[ndex] = src[ndex];
for (ndex = src_len; ndex < n; ndex++)
dest[ndex] = '\0';
return (dest);
}
