#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase character to uppercase
 * @stri: String pointer
 * Return: changed pointer
 */
char string_toupper(char *stri)
{
int i;
while (*(stri + i) != '\0')
{
if (*(stri + i) >= 97 && *(stri + i) <= 122)
{
*(stri + i) = *(stri + i) - 32;
}
i++;
}

return (stri);
}
