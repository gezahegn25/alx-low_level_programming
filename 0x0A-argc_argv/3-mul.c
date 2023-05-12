#include "main.h"
#include <stdio.h>


/**
 * _atoi - converts a string to integer
 * @s: string  converted
 *
 * Return: an int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, d, f, e;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;

	while (a < d && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e = s[a] - '0';
			if (b % 2)
				e = -e;
			n = n * 10 + e;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}


/**
 * main - multiply two number
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	z = x * y;

	printf("%d\n", x);

	return (0);
}
