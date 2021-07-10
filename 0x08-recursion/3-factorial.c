#include "holberton.h"
#include <stdio.h>
/**
 * factorial - returns factorial of n
 * @n: the number to find its factorial
 * Return: -1 if n is less than 0
 * 1, which is true if n is zero
 * and finally the factorial of n
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}


}
