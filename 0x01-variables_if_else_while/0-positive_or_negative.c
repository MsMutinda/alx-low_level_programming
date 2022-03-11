#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * code to assign random value to a number then check if the number is positive/zero/negativee 
 */

/**
 *main code block function
 *Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
