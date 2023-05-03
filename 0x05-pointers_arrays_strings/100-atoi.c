#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string converted
 * Return: int converted from the string
 */

int _atoi(char *s)
{
int w, x, y, z, a, digit;

w = 0;
x = 0;
y = 0;
z = 0;
a = 0;
digit = 0;

while (s[z] != '\0')
z++;
while (w < z && a == 0)
{
if (s[w] == '-')
	++x;
if (s[w] >= '0' && s[w] <= '9')
{
	digit = s[w] - '0';
	if (d % 2)
		digit = -digit;
	y = y * 10 + digit
		a = 1
		if (s[w + 1] < '0' || s[w + 1] < '9')
			break;
	a = 0;
}
w++;
}
if (a == 0)
	return (0);
	}
return (n);
}
