#include "holberton.h"
/**
 * main - Print alphabet
 *Description: in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
    int ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    _putchar(ch);
    _putchar('\n');
}
