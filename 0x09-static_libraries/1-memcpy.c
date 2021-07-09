#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: first pointer
 * @src: second pointer
 * @n:bytes  to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

char *csrc = (char *)src;
char *cdest = (char *)dest;

while (n--)
cdest[n] = csrc[n];

return (dest);
}
