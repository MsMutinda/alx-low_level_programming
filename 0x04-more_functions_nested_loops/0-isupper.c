#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - A function that checks for uppercase character
 * @c: Character to be displayed.
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
