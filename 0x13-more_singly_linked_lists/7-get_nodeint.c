#include "lists.h"

/**
 * get_nodeint_at_index - function returns the node
 * certain index in a linked list
 * @head: the first node in linked list
 * @index: an index of node to return
 *
 * Return: pointer to  node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}

