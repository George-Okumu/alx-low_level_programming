#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase character to uppercase
 * @n: String pointer
 * Return: changed pointer
 */
char string_toupper(char *n)
{
int i = 0;

while (n[i] != '\0')
{
if (n[i] > 96 && n[i] < 123)
n[i] -= 32;
i++;
}
return (n);
}
