#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase character to uppercase
 * @n: String pointer
 * Return: changed pointer
 */
char string_toupper(char *n)
{
int i;

while (*n != '\0')
{
if (*n > 96 && *n < 123)
n[i] -= 32;
i++;
}
return (n);
}
