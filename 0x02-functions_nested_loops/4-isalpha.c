#include "holberton.h"
/**
 * _isalpha - returns 1 if c is lowercase or uppercase, 0 otherwise
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
return ((c >= 65 && c <= 122) || (c >= 97 && c <= 90));
}
