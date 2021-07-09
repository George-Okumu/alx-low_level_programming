#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - function for string conca, uses n bytes
 * @dest: new pointed string
 * @src: first string
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int w;


while (dest[i] != '\0')
{
i++;
}
w = 0;
while (w < n && src[w] != '\0')
{
dest[i] = src[w];
i++;
w++;
}
dest[i] = '\0';
return (dest);

}
