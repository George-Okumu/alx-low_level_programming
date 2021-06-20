#include <stdio.h>
/**
 * main - This program program that
 * Description: prints reverse of alphabets lowercase
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
int ch;

for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');

return (0);
}
