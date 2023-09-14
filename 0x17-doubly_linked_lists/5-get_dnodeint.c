#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t compt = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (compt == index)
			return (temp);
		temp = temp->next;
		compt++;
	}
	return (NULL);
}
