#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses string
 * _strlen - finds length of s
 * @s: string to be played with
 * Return: 0
 */
void rev_string(char *s)
{
int length, c;
char *begin, *end, temp;

length = _strlen(s);
begin  = s;
end = s;

for (c = 0; c < length - 1; c++)
end++;

for (c = 0; c < length / 2; c++)
{
temp   = *end;
*end   = *begin;
*begin = temp;

begin++;
end--;
}

}
