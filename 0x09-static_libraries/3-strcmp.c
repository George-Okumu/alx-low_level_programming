#include "holberton.h"
#include <stdio.h>
/**
 *_strcmp - for comparing string
 *@s1: string one
 *@s2: string 2
 * Return: 0 if true
 * else return difference between string pointer
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;
s1++;
s2++;
}

if (*s1 == '\0' && *s2 == '\0')
return (0);
else
return (*s1 - *s2);

}