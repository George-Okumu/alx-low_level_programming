#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Description: Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function 4 times
 * Return: 0
 */
int main(void)
{
int ch;

for (ch ='0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch != 9){
    putchar(',');
    putchar(' ');
}
}
putchar('\n');

return (0);
}
