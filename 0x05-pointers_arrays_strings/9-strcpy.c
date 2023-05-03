#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - function that prints n elements of an array of integers
 * @src: copy from
 * @dest:copy to
 * Return: string
 */
char *_strcpy(char *dest, char *src)
int t = 0;
int w = 0;

while (*(src + t) != '\0')
{
	t++;
}
for (; w < t; w++)
{
	dest[t] = src[t];
}
dest[t] = '\0';
return (dest);
}
