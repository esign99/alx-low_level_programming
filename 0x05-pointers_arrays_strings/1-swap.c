#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first to be swap
 * @b: second to be swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
