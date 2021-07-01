#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase character to uppercase
 * @n: String pointer
 * Return: changed pointer
 */
char string_toupper(char *n)
{

while (*n != '\0')
{
if (*n > 96 && *n < 123)
*n -= 32;
n++;
}
return (n);
}
