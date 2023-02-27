#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: para to be passed is string
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length = length + 1;
		i++;
	}

	return (length);

}
