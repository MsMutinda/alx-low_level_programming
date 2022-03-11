/*
 * Using putchar function to disply alphabet in reverse
*/
#include <stdio.h>
/**
 * main - block code
 *
 * Return: 0;
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}