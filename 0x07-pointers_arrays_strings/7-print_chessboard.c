#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard pattern
 * @a: array pointer
 */
void print_chessboard(char (*a)[8])
{
int i;
int rows;

for (rows = 0; rows < 8; rows++)
{
for (i = 0; i < 8; i++)
_putchar(a[rows][i]);
_putchar('\n');
}
}
