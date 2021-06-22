#include "holberton.h"
/**
 * main - prints lowercase alphabet
 * Description: uses 2 _putchar
 * Return: void
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
