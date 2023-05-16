#include "main.h"
#include <stdlib.h>


/**
 * create_array - function that creates an array of chars
 * @size: array size
 * @c: assign char
 * Return: a pointer to array, NULL if size = 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

