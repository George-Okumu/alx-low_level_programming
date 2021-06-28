#include "holberton.h"
/**
 * _puts - prints string
 * @str: character pointer
 * Description: while loop that iterates through
 * the string till it reaches the null value of the string \0.
 * Finally print the iterated value
 */
void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
}
