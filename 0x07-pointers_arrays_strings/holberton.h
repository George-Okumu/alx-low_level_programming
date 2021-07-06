#ifndef HOLBERTON_H
#define HOLBERTON_H

/*  Fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* prototype that copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*locates a character in a string*/
char *_strchr(char *s, char c);

/*gets the length of a prefix substring*/
unsigned int _strspn(char *s, char *accept);

/*searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);

/*locates a substring*/
char *_strstr(char *haystack, char *needle);

#endif