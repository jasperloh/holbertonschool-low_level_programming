/**
 * _strdup - duplicate the string into a newly allocated pointer
 * @str: string
 *
 * Return: array
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	char *array;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	;

	array = malloc(((len + 1) * sizeof(char)));
	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= len ; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
