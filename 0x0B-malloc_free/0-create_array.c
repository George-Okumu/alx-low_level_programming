#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: array of chars
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
return (0);

while (size--)
m[size] = c;

return (m);
return (0);
}
