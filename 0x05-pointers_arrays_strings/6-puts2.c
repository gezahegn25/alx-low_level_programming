#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
int x = 0;
int y = 0;
char *z = str;
int w;

while (*z != '\0')
{
	z++;
	x++;
}
y = x - 1;
for (w = 0; w <= y; w++)
{
	if (w % 2 == 0)
{
	_putchar(str[w]);
}
}
_putchar('\n');
}
