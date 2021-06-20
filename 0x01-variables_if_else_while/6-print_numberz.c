#include <stdio.h>
/**
 * main - This program program that
 * Description: prints numbers of base 10
 * not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
int base10 = 0;

for (base10 = 0; base10 <= 9; base10++)
putchar(base10);
putchar('\n');

return (0);
}
