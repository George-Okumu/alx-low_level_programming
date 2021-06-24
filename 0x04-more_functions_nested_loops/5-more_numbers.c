#include "holberton.h"
/**
 * more_numbers - prints 1-14 10 times
 * Description: use only _putchar
 * Return: void
 */
void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{

int a = 0;
while (a <= 14)
{
int b = 0;
b = a;
if (a > 9)
b = a / 10;
_putchar('0' + b);
if (a > 9)
_putchar('0' + a % 10);
a++;
}
_putchar('\n');
}
}
