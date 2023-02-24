#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 *
 * @size: parameter is triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
    int a, b;

    if (size <= 0)
        _putchar('\n');

    for (a = 1; a <= size; a++)
    {

        for (b = 1; b <= size; b++)

        {

            if (b <= (size - a))

                _putchar(' ');
            else
                _putchar('#');
        }
        _putchar('\n');
    }
}