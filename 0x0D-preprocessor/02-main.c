#include<stdio.h>
#include<stdlib.h>
#include<libgen.h>
/**
 * main - main
 * @argc: first argu
 * @argv: second argu
 * Return: sucess
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
char *exe_name = basename(argv[0]);

printf("%s", exe_name);
printf("\n");

return (EXIT_SUCCESS);
}
