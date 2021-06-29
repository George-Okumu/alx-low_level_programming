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
	int len = 0;

	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		len /= 2;
	else
		len = len / 2 + 1;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
