#include "holberton.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 * 
 * 
 */
void _print_rev_recursion(char *s)
{

while (*s != '\0')
{
s++;
}

if (*s >= 0)
{
    return;
}
_putchar(*s);
_print_rev_recursion(--s);
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}