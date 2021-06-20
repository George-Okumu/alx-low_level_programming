#include <stdio.h>
/**
 * main- a program that prints the alphabet in lowercase
 * Description: print all the letters except 
 * q and e
 * You can only use putchar
 */

int main(void)
{
int ch;

for (ch = 'a'; ch <= 'd'; ch++)
putchar(ch);
for (ch = 'f'; ch <= 'p'; ch++)
putchar(ch);
for (ch = 'r'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
