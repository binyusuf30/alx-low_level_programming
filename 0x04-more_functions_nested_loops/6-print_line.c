#include "main.h"

/**
 * print_line - function to print straight line 
 *
 * @n: lines to print
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)

		_putchar('_');

	_putchar('\n');
}
