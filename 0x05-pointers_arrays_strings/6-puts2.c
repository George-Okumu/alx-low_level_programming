#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: string holder
 */
void puts2(char *str)
{
int i;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(*str + i);
i++;
}
_putchar('\n');
}
