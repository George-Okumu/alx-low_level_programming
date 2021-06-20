#include <stdio.h>
/**
 * main - This program program that
 * prints the alphabet in lowercase,
 * then in uppercase followed by a new line
 * Description: You can only use the putchar function
 * Return: 0
 */
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');



return (0);
}