#include "holberton.h"
/**
 * puts_half - function to print second half of string
 * @str: string to be printed
 * Description: If the number of characters is odd,
 * the function should print the last n characters of the string,
 *  where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
int i;
/*for length*/
while (*(str + i) != '\0')
i++;
/*n = (length_of_the_string - 1) / 2*/
if (i % 2 == 0)
i /= 2;
else
i = i / 2 + 1;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
