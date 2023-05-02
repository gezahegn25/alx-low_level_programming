#include "main.h"

/**
 * swap_int - swapo the value
 * @a: integer to swap
 * @b: integer to swap
 *
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
