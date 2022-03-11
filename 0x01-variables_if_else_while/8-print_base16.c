/*
 * Using putchar function to display hexadecimal
 */

#include <stdio.h>

/**
 * main - block code
 * Return: 0.
 */
int main(void)
{
	int base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (base = 'a'; base <= 'f'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}