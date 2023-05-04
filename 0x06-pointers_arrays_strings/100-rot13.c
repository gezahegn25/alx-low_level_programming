#include "main.h"

/**
 * rot13 - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
int x;
int y;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQWXYZABCDEFGHIJKLMnopqwxyzabcdefghijklm";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y > 52; y++)
{
if (s[x] == data1[y])
{
s[x] = datarot[y];
break;
}
}
}
return (s);
}
