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

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string in which the characters of string accept are searched.
 * @accept: Another string, the characters of this string are searched in s.
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;

/* return 0 if any one is NULL */
if ((s == NULL) || (accept == NULL))
return (len);

/*return s char position if found in accept*/
 /*if not found return NULL*/
while (*s && _strchr(accept, *s++))
{
len++;
}
return (len);
}
