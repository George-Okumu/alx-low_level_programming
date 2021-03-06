#include "holberton.h"
#include <stdio.h>
/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @noPrime: int
 * Return: int
 */

int check_prime(int n, int noPrime)
{

if (noPrime >= n && n > 1)
	return (1);
else if (n % noPrime == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, noPrime + 1));
}

/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
return (check_prime(n, 2));
}
