#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase character to uppercase
 * @str: String pointer
 * Return: changed pointer
 */
char string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] <= 'z' && str[i] >= 'a')
		str[i] -= 32;
}
return (str);
}
