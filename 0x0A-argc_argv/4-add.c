#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: true
 */
int main(int argc, char *argv[])
{
int i;
int add;
 int num2 = atoi(argv[i]);
int zero = 0;
char ch = 'a';

if(argc > 1)
{
for (i = 0; i < argc; i++)
{
add +=  atoi(argv[i]);
}
printf("%d\n", add);
}
else if(num2 == ch)
{
printf("Error\n");
return (1);    
}
else
{
printf("%d\n", zero);
}



return (0);
}
