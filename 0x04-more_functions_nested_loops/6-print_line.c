#include "main.h"

/**
 * print_line - print 0-15  10xand end with new line.
 *
 * @n:user input of number of line
 * Return: 0-15 10x and new line after
 */

void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}

_putchar('\n');
}
