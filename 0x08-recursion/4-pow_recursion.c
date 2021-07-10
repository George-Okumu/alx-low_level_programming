#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - returns x raised to y
 * @x: first value, base value
 * @y: power of x
 * Return: conditions
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * (_pow_recursion(x, y - 1)));
}

}
