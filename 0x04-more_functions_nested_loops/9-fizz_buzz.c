#include "holberton.h"
#include <stdio.h>
/**
 * main - print fizbuzz
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("fizzbuzz ");

}
else if ((i % 5) == 0)
{

printf("buzz ");
}
else if (i % 3 == 0)
{
printf("fizz ");
}

else
{
printf("%d ", i);
}

}
printf("\n");
return (0);
}
