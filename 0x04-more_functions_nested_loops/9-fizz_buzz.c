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
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num == 100)
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
