#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of array of integers
 * @a: pointer to array interger
 * @n: number of elements of the array to be printed
 * Description: Numbers must be separated by comma,followed by a space
 * the numbers should be displayed in the same order as
 * they are stored in the array
 */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", *(a + j));
if (j != (n - 1))
printf(", ");
}
printf("\n");
}
