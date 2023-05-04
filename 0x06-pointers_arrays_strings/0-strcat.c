#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: the input value
 * @dest: the input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}

