#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that print buffer
 * @b: buffer printed
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
int w, y, z;

w = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (w < size)
{
y = size - w < 10 ? size - w : 10;
printf("%08x: ", w);
for (z = 0; z < 10; z++)
{
if (z < y)
printf("%02x", *(b + w + z));
else
{
printf(" ");
}
}
if (z % 2)
{
printf(" ");
}
}
for (z = 0; z < y; z++)
{
int d = *(b + w + z);
if (d < 32 || d > 132)
{
d = '.';
}
printf("%c", d);
}
printf("\n");
w += 10;
}
