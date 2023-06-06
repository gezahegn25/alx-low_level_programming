#include "lists.h"


/**
 * delete_nodeint_at_index - function delete node in linked
 * list at a certain index
 * @head: the pointer to first element in list
 * @index: an index of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		x++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

