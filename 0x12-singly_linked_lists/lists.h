#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/*prints all elements of list_t*/
size_t print_list(const list_t *h);

/*Returns no of elements in a list_t*/
size_t list_len(const list_t *h);

/*Adds new node at the begging of a lsit*/
list_t *add_node(list_t **head, const char *str);

/*Adds new node at the end of a list_t*/
list_t *add_node_end(list_t **head, const char *str);

/*put char*/
int _putchar(char c);

#endif
