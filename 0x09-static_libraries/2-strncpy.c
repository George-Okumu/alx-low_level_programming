#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copies string with n bytes
 * @dest: new string
 * @src: string to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int w;

w = 0;
while (w < n && src[w] != '\0')
{
dest[w] = src[w];
w++;
}
while (w < n)
{
dest[w] = '\0';
w++;
}

return (dest);
}
