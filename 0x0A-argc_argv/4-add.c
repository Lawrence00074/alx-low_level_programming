#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive number
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
int t, o, sum = 0;
char *flag;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (t = 1; argv[t]; t++)
{
o = strtol(argv[t], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += o;
}
}
printf("%d\n", sum);
return (0);
}
