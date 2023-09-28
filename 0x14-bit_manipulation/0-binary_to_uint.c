#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 * Return: the binary to decimal or base 10 conversion
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum, t, length;
sum = 0, length = 0;
if (b == NULL)
return (0);
while (b[length] != '\0')
length++;
length -= 1;
for (t = 0; b[t] != '\0'; t++)
{
if (b[t] < '0' || b[t] > '1')
return (0);
sum += (b[t] - '0') * (1 << length);
length -= 1;
}
return (sum);
}
