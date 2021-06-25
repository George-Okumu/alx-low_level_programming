#include "holberton.h"
/**
 * print_triangle - function that prints triangleby a new line
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
int row, col, z;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
z = (size - row) - 1;
if (col < z)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
