#include "main.h"

/**
 * swap_int - function to swap values of a and b
 * @a: value to swap with b
 * @b: value to swap with a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
