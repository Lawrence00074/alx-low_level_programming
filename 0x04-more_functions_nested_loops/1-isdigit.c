#include "main.h"
/**
 * _isdigit - Check if the character is a digit.
 * @t: The number to be checked
 * Return: 1 for a character that will be digit or 0 for any else
 */
int _isdigit(int t)
{
if (t >= 48 && t <= 57)
{
return (1);
}
return (0);
}
