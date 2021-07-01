#ifndef HOLBERTON_H
#define HOLBERTON_H

/*concantenates two strings*/
char *_strcat(char *dest, char *src);

/*concantecates two strings but uses n bytes from src*/
char *_strncat(char *dest, char *src, int n);

/*copies a string*/
char *_strncpy(char *dest, char *src, int n);

/*function that compares two strings*/
int _strcmp(char *s1, char *s2);

/*for reversing string*/
void reverse_array(int *a, int n);

/*changes all lowercase string to uppercase*/
char *_string_toupper(char *);

/*capitalises every word in a string separated by ,, ;, ., !, ?, ", (, ), {, and }*/
char *cap_string(char *);

#endif