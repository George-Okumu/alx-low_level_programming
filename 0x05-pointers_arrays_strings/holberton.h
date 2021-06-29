#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Prints holberton*/
int _putchar(char);

/* updates the value it points to to */
void reset_to_98(int *n);

 /*swaps to values of two integers*/
void swap_int(int *a, int *b);

/*returns the length of a string*/
int _strlen(char *s);

/*prints a string*/
void _puts(char *str);

/*prints a string in reverse*/
void print_rev(char *s);

/*Reverses a string*/
void rev_string(char *s);

/*prints every character*/
void puts2(char *str);

/*for half of a string*/
void puts_half(char *str);

/*copies string pointed by src*/
char *_strcpy(char *dest, char *src);

#endif