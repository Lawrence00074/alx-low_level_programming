#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int t, o;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (t = 1; t < argc; t++)
{
for (o = 0; argv[t][o] != '\0'; o++)
{
if (argv[t][o] > 57 || argv[t][o] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", mul);
return (0);
}
