#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swap two integer values
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
int numberOne = *a;
int numberTwo = *b;

*a = numberTwo;
*b = numberOne;
}
