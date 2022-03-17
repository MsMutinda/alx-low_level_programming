#include <stdio.h>

/**
 * main - Fizz or Buzz
 *
 *
 * Return: 1
 */
int main(void)
{

int fizz = 1;

while (fizz < 101)
{
if (fizz % 3 == 0 && fizz % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (fizz % 3 == 0)
{
printf("%s", "Fizz");
}
else if (fizz % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", fizz);
}

if (fizz != 100)
{
printf(" ");
}
fizz++;
}
printf("\n");
return (1);
}
