#include "holberton.h"
/**
 * print_most_numbers - print numbers zero-nine
 * Description: use only _putchar
 * Return: zero-nine except two and four
 */
void print_most_numbers(void)
{
int ch = 48;
while((ch < 58) &! (50 && 52))
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
int main(void)
{
    print_most_numbers();
    return (0);
}
