#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: substring
 * Return: a pointer to the begging of the located substring
 */
char *_strstr(char *haystack, char *needle)
{

while (*haystack)
{
char *begin = haystack;
char *pattern = needle;

while (*haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (begin);

haystack = begin + 1;

}
return (NULL);
}
