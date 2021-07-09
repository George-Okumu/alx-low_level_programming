#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: string to be appended
 * @src: string to append
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *concantenatedString = dest;

/*pointing oto the end of first string*/
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;/*storing the base address of second at the end of the first.*/
src++;
dest++;
}
/*string must end with*/
*dest = '\0';

return (concantenatedString);
}
