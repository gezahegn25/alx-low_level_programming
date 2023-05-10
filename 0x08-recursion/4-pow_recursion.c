#include "main.h"


/**
 * _pow_recursion - function that returns the value of raised
 * @x: value raised
 * @y: power of y
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
