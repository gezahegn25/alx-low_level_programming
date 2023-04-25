#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: the char to be checked
 * Return: 1 if the char is lowercase, otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

