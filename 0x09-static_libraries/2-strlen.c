#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length
 * Return: The lengh of @sr
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
