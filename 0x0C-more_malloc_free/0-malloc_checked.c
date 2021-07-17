#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * @b: int to be allocated memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);
if (!pointer)
exit(98);
return (pointer);

}
