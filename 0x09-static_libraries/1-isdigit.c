#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: returns 1 if c is a digit
 * Return: 1 otherwise return 0 if c is not digit
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
