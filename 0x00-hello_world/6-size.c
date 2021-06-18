#include <stdio.h>
/**
 * main - Prints the size of various types on a computer
 * Description: Prints Size of:
 *  a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 4 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)
 * Return: 0
 */
int main(void)
{
int intType;
float longInt;
double longLongint;
char charType;
float floatType;

printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongint));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

return (0);
}
