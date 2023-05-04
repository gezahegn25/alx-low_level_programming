#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: an array
 * @n: is the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;


	for (x = 0; x < n--; x++)
	{
		y = a[n];
		a[x] = a[n];
		a[n] = y;

	}
}
