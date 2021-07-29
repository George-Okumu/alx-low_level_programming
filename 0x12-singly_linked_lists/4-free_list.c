#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *sai;
	list_t *nxt;

	sai = head;

	while (sai != NULL)
	{
		nxt = sai->next;
		free(sai->str);
		free(sai);
		sai = nxt;
	}
}
