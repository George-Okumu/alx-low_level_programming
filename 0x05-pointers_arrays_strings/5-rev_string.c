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
int c;
char *begin, *end, temp;
/*finding string length*/
int ch = 0;
while (s[ch])
ch++;

/*pointers, for first character and last*/
begin  = s;
end = s;

/*moving from begin to end*/
for (c = 0; c < ch - 1; c++)
end++;

/*use /2 to reverse*/
for (c = 0; c < ch / 2; c++)
{
/*swap pointers*/
temp   = *end;
*end   = *begin;
*begin = temp;

begin++;
end--;
}

}
