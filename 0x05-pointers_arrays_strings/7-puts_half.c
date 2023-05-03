#include "main.h"

/**
 * puts_half - function that prints half of string
 * @str: input string
 * if odd len, n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int m, n, z;

	z = 0;

	for (m = 0; str[m] != '\0'; m++)
	z++;
	m = (z / 2);
	if ((z % 2) == 1)
	n = ((z + 1) / 2);
	for (m = n; str[m] != '\0'; m++)
	_putchar(str[m]);
	_putchar('\n');
	}
