#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the character \ should be printed
 * Description: diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: void
 */
void print_diagonal(int n)
{
if (n > 0)
{
while (n > 0)
{
_putchar(' ');
n--;
}
_putchar('\\');
_putchar('\n');
}
else
{
_putchar('\n');
}

}
