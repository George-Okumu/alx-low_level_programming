#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number
 * to the variable n each time it is executed.
 * Description: Prints the following:
 * The output of the program should be:
 * The string Last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * followed by a new line
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, newNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
newNumber = n % 10;
if (newNumber > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, newNumber);
}
else if (newNumber != 0)
{
printf("Last digit of %d is ", n);
printf("%d and is less than 6 and not 0\n", newNumber);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, newNumber);
}

	return (0);
}
