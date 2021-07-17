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
if (!b)
{
exit(98);
}
else
{
return (malloc(b));
}

}
