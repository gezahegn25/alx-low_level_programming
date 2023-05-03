#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: array name
 * @n: number of element to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d,", a[y]);
}
if (y == (n - 1))
{
	printf("%d", a[n - 1]);
}
printf("\n");
}
