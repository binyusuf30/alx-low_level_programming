#include "main.h"

/**
 * _puts - function that prints a string followed by a newline
 *
 * @str: string to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
