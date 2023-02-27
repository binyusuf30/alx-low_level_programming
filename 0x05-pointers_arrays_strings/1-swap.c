#include "main.h"

/**
 * swap_int - function that swaps the values of teo integers
 *
 * @a: int parameter a
 * @b: int parameter b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
