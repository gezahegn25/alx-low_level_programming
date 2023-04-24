#include <stdio.h>
/**
 * main - possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int n, m;

for (n = 0; n < 100; n++)
{
for (m = 0; m < 100; m++)
{
if (n > m)
{
putchar((m / 10) + 48);
putchar((m % 10) + 48);
putchar(' ');
putchar((n / 10) + 48);
putchar((n % 10) + 48);
if (m != 99 || n != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
