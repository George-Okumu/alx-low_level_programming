#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - finds the first character in the string s that matches
 * any character specified in accept
 * @s: source string
 * @accept: search string 2
 * Return: the pointer of the first character that meets condition
 */
char *_strpbrk(char *s, char *accept)
{
/*Store the string we want to find*/
char const *stringFound  = NULL;

if (s == NULL || accept == NULL)
{
return (NULL);
}

while (*s != '\0')
{
/*initialize stringFound to chars*/
stringFound = accept;

while (*stringFound != '\0')
{
if (*s == *stringFound)
{
return ((char *)s);
}
stringFound++;
}
s++;
}
return (0);
}
