#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer to be found
 * Return: value of last digit
 */
int print_last_digit(int n)
{

	int newNumber;

	newNumber = n % 10;
	if (n < 0)
		newNumber = -newNumber;

	_putchar('0' + newNumber);
	return (newNumber);
}
