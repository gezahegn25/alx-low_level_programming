#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: function fills
 * Return: array changed by new value
 */

char *_memset(char *s, char b, unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
