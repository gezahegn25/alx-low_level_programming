#include "main.h"


/**
 * set_string - function that sets the value of a pointer to a char
 * @s: a pointer to pointer
 * @to: a pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
