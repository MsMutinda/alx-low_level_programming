#include "main.h"

/**
 * print_diagonal - print diagonal line based on input.
 *
 * @n:user input of number of line
 * Return: 0-15 10x and new line after
 */

void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
