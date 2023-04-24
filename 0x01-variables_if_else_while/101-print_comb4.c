#include <stdio.h>
/**
 * main - prints all differnt combinations of three digit
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int n, m, i;

for (n = 48; n <= 58; n++)
{
for (m = 49; m <= 57; m++)
{
for (i = 50; i < 58; i++)
{
if (i > m && m > n)
{
putchar(n);
putchar(m);
putchar(i);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
