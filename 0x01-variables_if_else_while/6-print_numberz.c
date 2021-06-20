#include <stdio.h>
/**
 * main - This program program that
 * Description: prints numbers of base 10
 * not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
int ch;

for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
