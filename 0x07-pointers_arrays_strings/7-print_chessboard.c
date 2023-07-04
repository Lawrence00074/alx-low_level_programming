#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int s;
int l;
for (s = 0; s < 8; s++)
{
for (l = 0; l < 8; l++)
_putchar(a[s][l]);
_putchar('\n');
}
}
