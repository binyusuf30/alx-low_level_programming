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
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
