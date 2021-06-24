#include "holberton.h"
/**
 * print_most_numbers - print numbers zero-nine
 * Description: use only _putchar
 * Return: zero-nine except two and four
 */
void print_most_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
if ((ch != 52 && ch != 50))
_putchar(ch);
_putchar('\n');
}
int main(void)
{
    print_most_numbers();
    return (0);
}
