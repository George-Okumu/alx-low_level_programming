#include "holberton.h"
/**
 * print_line - draws straight line in terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
if (n > 0)
{
while(n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}   