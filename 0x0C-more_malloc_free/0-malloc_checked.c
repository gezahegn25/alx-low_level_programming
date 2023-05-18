#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - memory allocate using malloc
 * @b: bytes to allocate
 *
 * Return: pointer to allocate memory
 */


void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
