#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed by src
 * @dest: new pointer to store copied value
 * @src: original pointer of string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
/*assigning base address of *dest to start*/
char *start = dest;

/*the while loops copies character from src to dest one by one until \0*/
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (start);
}
