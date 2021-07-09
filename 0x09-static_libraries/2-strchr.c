#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character located
 * Return: charcter to the first occurence of c in string s
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if ('\0')
{
return (s);
}
return (NULL);
}
