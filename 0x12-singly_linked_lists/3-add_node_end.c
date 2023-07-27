#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end 
 * @head: double pointer to the list_t list
 * @str: string 
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	temp = *head;
	new_node = malloc(sizeof(list_t));
	while (str[len])
		len++;
	if (new_node == NULL)
		return (NULL);
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}



