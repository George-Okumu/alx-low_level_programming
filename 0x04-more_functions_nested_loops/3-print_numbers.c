#include "holberton.h"
/**
 * print_numbers - prints 0-9
 * Return: void
 */
void print_numbers(void)
{
int ch = 48;

while (ch < 58)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
