#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: string holder
 * Return: 0
 */
int _strlen(char *s)
{
int ch = 0;
while (s[ch])
ch++;
return (ch);
}

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
