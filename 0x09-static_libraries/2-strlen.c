#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: the character
 * Description: strlen function "walks" the C-string from
 * left to right with a loop and counts each character.
 * Return: total charater after the loop have totally counted
 */
int _strlen(char *s)
{
int ch = 0;
while (s[ch])
ch++;
return (ch);
}
