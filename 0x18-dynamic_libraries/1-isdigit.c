#include "main.h"
#include <stdio.h>
/**
 * _isdigit - the check main
 * @c:  integer input
 * Description: to Write  function that checks for a digit (0 through 9).
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
char i;
int n = 0;
for (i = '0'; i <= '9'; i++)
{
if (i == c)
{
n = 1;
break;
}
}
return (n);
}
