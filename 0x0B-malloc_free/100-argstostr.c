#include <stdlib.h>
#include "main.h"


/**
 * argstostr - function that concatenates all the arguments
 * @ac: input
 * @av: double pointer array
 * Return: Always 0
 */


char *argstostr(int ac, char **av)
{
	int x, y, w = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		str[w] = av[x][y];
		w++;
	}
	if (str[w] == '\0')
	{
		str[w++] = '\n';
	}
	}
	return (str);
}

