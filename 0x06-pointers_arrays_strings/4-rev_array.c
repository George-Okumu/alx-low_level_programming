#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - to reverse the content of array integers
 * @n: the number of elements of the array
 * @a: array of integers
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int *pointer2 = a + n - 1;

while (a < pointer2)
{
int memory = *a;
*a = *pointer2;
*pointer2 = memory;
a++;
pointer2--;
}

}
