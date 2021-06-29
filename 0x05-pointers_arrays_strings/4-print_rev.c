#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * _strlen - prints the length of a string
 * @c: pointer to character
 * @s: the pointer to the string
 */
int _strlen(char *c)
{
int ch = 0;
while (c[ch])
ch++;
return (ch);
}

void   print_rev(char *s)
{
int i, m;
char *end_pointer, *beginner_pointer, ch, t;
/*Getting the length of the string*/
m = _strlen(s);

/*setting the pointers to start of string(s)*/
end_pointer = s;
beginner_pointer = s;

/*move the end pointer to the last char*/
for (i = 0; i < (m - 1); i++)
end_pointer++;

/*swap the char from start to end*/
for (i = 0; i < (m / 2); i++)
{
/*swap character*/
ch = *end_pointer;
t = *beginner_pointer;
*beginner_pointer = ch;
*end_pointer = t;

/*update pointers positions*/
beginner_pointer++;
end_pointer--;

}
}
