#include "holberton.h"
/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 * Description: If size is 0 or less,
 * the function should print only a new line
 * Use the character # to print the square
 * Return: 0
 */
void print_square(int size)
{
int z = 0;
int j = 0;
if (size > 0)
{
for (z = 0; z < size; z++)
{
for (j = 0; j < size; j++)

_putchar('#');

_putchar('\n');
j++;
}
}
else
{
_putchar('\n');
}
}
