#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *help;

	while (head)
	{
		help = head->next;
		free(head->str);
		free(head);
		head = help;
	}
}
