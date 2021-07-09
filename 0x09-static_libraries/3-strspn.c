#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string in which the characters of string accept are searched.
 * @accept: Another string, the characters of this string are searched in s.
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, foundChar;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			foundChar = 0;
			if (*s == accept[i])
			{
				res++;
				foundChar = 1;
				break;
			}
		}
		if (!foundChar)
			break;
		s++;
	}
	return (res);
}
