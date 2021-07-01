#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - captalizes all words of a string
 * @n: string pointer
 * Return: n
 */
char *cap_string(char *n)
{
int i = 0;

if (*n >= 96 && *n <= 123)
{
*n -= 32;
}
for (i = 0; n[i] != '\0'; i++)
{
switch (n[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (n[i + 1] > 96 && n[i + 1] < 123)
{
n[i + 1] = n[i + 1] - 32;
}
}
}
return (n);
}
