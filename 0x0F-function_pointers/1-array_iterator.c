#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - unction that executes a function given
 * as a parameter on each element of an array
 * @array: an array
 * @size: elements to print
 * @action: pointer to print
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}

