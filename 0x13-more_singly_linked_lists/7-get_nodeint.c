#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointing on node we want, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
