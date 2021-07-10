#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - find length of string
 * @s: the string
 * Return: length in int
 */
int _strlen_recursion(char *s)
{
int ch = 0;

if (*s > '\0')
{
ch = ch + _strlen_recursion(s + 1) + 1;
}
return (ch);
}
