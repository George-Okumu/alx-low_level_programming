#include "lists.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 * 
 */
size_t print_list(const list_t *h)
{

size_t ge_nodes = 0;
const list_t *num__of_nodes= h;

while (num__of_nodes != NULL)
{
printf("[%d] %s\n", num__of_nodes->len,
num__of_nodes->str != NULL ? num__of_nodes->str : "(nil)");
num__of_nodes = num__of_nodes->next;
ge_nodes++;
}
return (ge_nodes);
}
