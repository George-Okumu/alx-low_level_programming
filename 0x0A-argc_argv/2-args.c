#include <stdio.h>
/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: true
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
