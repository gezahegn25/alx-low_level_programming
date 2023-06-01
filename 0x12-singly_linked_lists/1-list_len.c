#include "lists.h"
#include <stdlib.h>


/**
 * list_len - function tjhat  returns the numbers linked list
 * @h: the pointer to list_t list
 *
 * Return:  elements in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}



