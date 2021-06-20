#include <stdio.h>
/**
 * main - This program program that
 * Description: prints numbers of base 16 in lowercase
 * You can only use the putchar function 3 times
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
